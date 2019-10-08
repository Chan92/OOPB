// OOPB_w3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Broodmandje.h"
#include <iostream>

//void geefMandjeDoor(Broodmandje& mandje) {
void geefMandjeDoor(Broodmandje* mandje) {
	std::cout << "Mandje gekregen" << std::endl;
	mandje->toon();

	mandje->voegToe("Croissant");
	mandje->toon();
}

int main() {
	std::cout << "Mandje maken" << std::endl;
	Broodmandje* mandje = new Broodmandje();
	mandje->toon();

	mandje->voegToe("Kaisrbroodje");
	mandje->toon();

	//Broodmandje* p = &mandje;
	//geefMandjeDoor(p);

	geefMandjeDoor(mandje);

	std::cout << "Mandje teruggekregen" << std::endl;
	mandje->toon();

	delete mandje;
}

/*
int main(){
	std::cout << "Mandje maken" << std::endl;
	Broodmandje mandje = Broodmandje();
	mandje.toon();

	mandje.voegToe("Kaisrbroodje");
	mandje.toon();

	//Broodmandje* p = &mandje;
	//geefMandjeDoor(p);
	
	geefMandjeDoor(&mandje);

	std::cout << "Mandje teruggekregen" << std::endl;
	mandje.toon();
}
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
