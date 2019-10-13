#pragma once
#include <string>
#include "Broodje.h"

class Broodmandje
{
	public:
		Broodmandje();
		~Broodmandje();
		Broodmandje(const Broodmandje& broodmandje);
		Broodmandje& operator=(const Broodmandje& deAndere);

		void toon();
		void voegToe(std::string type);
	
	private:
		Broodje* broodje = nullptr;
};

