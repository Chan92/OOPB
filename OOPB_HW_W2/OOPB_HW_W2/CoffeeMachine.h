#pragma once
#include "Coin.h"
#include <string>

class CoffeeMachine{
	private:
		float _givenValue;
		std::string type[3] = {"Coffee type a","Coffee type b","Coffee type c"};

		void checkCoin(Coin::Values _coinValue);		
		void getCoffee();
		std::string getCoffeeChoice(int _maxChoice);

	public:
		CoffeeMachine();
		void insertPayment(Coin::Values _coinValue);
		void insertPayment(Coin::Values _coinValue, Coin::Values _secondCoinValue);	
};

