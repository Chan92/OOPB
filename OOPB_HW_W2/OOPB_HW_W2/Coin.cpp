#include "pch.h"
#include "Coin.h"
#include <iostream>

Coin::Coin(){}
Coin::Coin(Values _value) : value(_value) {}

Coin::Values Coin::getValue(){
	std::cout << "Coin value is: " << value << std::endl;
	return value;
}
