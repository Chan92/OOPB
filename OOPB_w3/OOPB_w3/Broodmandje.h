#pragma once
#include <string>
#include "Broodje.h"

class Broodmandje
{
	public:
		Broodmandje();
		~Broodmandje();

		void toon();
		void voegToe(std::string type);
	
	private:
		Broodje* broodje;
};

