// OOPB_HW_W3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Library.h"
#include <iostream>

int main(){
	Library library1 = Library();

	library1.showBook();
	library1.returnBook("The war against c++!");

	Library library2;
	library2 = library1;

	std::cout << ">Books in library2: \n";
	library2.showBook();

	std::cout << "\n";
	library1.returnBook("Epic battle in the c++ field");

	std::cout << "\n";
	std::cout << ">Books in library1: \n";
	library1.showBook();
	std::cout << ">Books in library2: \n";
	library2.showBook();

	std::cout << "\n";
	library1.lendBook();
	std::cout << ">Books in library2: \n";
	library2.showBook();
	std::cout << ">Books in library1: \n";
	library1.showBook();
	



    std::cout << "end of code!\n"; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
