#pragma once

class Coin{
	public:
		enum Values { halfCoin, fullCoin, specialCoin };
		Coin();
		Coin(Values _value);
		Values getValue();

	private:				
		Values value;

};

