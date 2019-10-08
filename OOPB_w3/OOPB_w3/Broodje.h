#pragma once

#include <string>

class Broodje {
	public:
		Broodje();
		Broodje(std::string type);
		~Broodje();
		std::string type = "(onbekent)";
};

