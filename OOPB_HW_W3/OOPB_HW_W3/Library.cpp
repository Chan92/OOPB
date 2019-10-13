#include "pch.h"
#include "Library.h"
#include <iostream>

Library::Library(){}

Library::Library(const Library& _library){
	book = new Book();
	book->title = _library.book->title;
}

Library& Library::operator=(const Library& _library){
	if (this != &_library) {
		if (book) delete book;

		book = new Book();
		book->title = _library.book->title;
		return *this;
	}
}

Library::~Library(){
	delete book;
}

void Library::showBook(){
	if (book) {
		std::cout << "The library has " << book->title << std::endl;
	} else {
		std::cout << "The library currently has no books" << std::endl;
	}
}

void Library::lendBook(){	
	if (book) {
		std::cout << "Takes the book " << book->title << std::endl;
		delete book;
	} else {
		std::cout << "The library currently has no books" << std::endl;
	}
}

void Library::returnBook(std::string _title){	
	if (book) {
		delete book;
	} else {
		book = new Book(_title);
		std::cout << "Gave '" << _title << "' back to the library" << std::endl;
	}
}
