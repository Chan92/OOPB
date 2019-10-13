#pragma once
#include <string>

class Book{
	public:
		Book();
		Book(std::string _title);
		~Book();
		
		std::string title = "<Unknown?>";
};

