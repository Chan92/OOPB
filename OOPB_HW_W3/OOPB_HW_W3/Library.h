#pragma once
#include "Book.h"

class Library{
	public:
		Library();
		Library(const Library& _library);
		Library& operator=(const Library& _library);
		~Library();

		void showBook();
		void lendBook();		
		void returnBook(std::string _title);

	private:
		Book* book = nullptr;
};

