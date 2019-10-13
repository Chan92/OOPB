#include "pch.h"
#include "CoffeeMachine.h"
#include <iostream>


CoffeeMachine::CoffeeMachine(){}

void CoffeeMachine::checkCoin(Coin::Values _coinValue) {
	switch (_coinValue) {
		case Coin::halfCoin:
			_givenValue = _givenValue + 0.5f;
			break;
		case Coin::fullCoin:
			_givenValue = _givenValue + 1.0f;
			break;
		case Coin::specialCoin:
			_givenValue = _givenValue + 10.0f;
			break;
	}
}

void CoffeeMachine::insertPayment(Coin::Values _coinValue, Coin::Values _secondCoinValue) {
	_givenValue = 0;
	checkCoin(_coinValue);
	checkCoin(_secondCoinValue);
	getCoffee();
}

void CoffeeMachine::insertPayment(Coin::Values _coinValue) {
	_givenValue = 0;
	checkCoin(_coinValue);
	getCoffee();
}

void CoffeeMachine::getCoffee() {
	if (_givenValue >= 2.0f) {
		std::cout << "Please pick your Coffee" << std::endl;
		std::cout << "1: " << type[0] << std::endl;
		std::cout << "2: " << type[1] << std::endl;
		std::cout << "3: " << type[2] << std::endl;

		getCoffeeChoice(3);
	} else if (_givenValue >= 1.0f) {
		std::cout << "Please pick your Coffee" << std::endl;
		std::cout << "1: " << type[0] << std::endl;
		std::cout << "2: " << type[1] << std::endl;

		getCoffeeChoice(2);
	} else if (_givenValue >= 0.5f) {
		std::cout << "Please pick your Coffee" << std::endl;
		std::cout << "1: " << type[0] << std::endl;

		getCoffeeChoice(1);
	} else {
		std::cout << "--ERROR you didnt pay enough: " << _givenValue << std::endl;
	}
}

std::string CoffeeMachine::getCoffeeChoice(int _maxChoice){
	int _choice = 0;

	std::cin >> _choice;
	_choice--;

	if (_choice >= 0 && _choice < _maxChoice) {
		std::cout << "Obtained " << type[_choice] << std::endl;
		return type[_choice];
	} else {
		std::cout << "--ERROR you either didnt pay enough or there is no coffee of type: " << _choice  << std::endl;
	}

	return std::string();
}
