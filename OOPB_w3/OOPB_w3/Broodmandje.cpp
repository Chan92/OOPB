#include <iostream>
#include "pch.h"
#include "Broodmandje.h"


Broodmandje::Broodmandje(){}

Broodmandje::~Broodmandje(){
	std::cout << "Broodmandje: dtor" << std::endl;
	delete broodje;
}

void Broodmandje::toon() {
	if (broodje) {
		std::cout << " Broodmandje bevat " << broodje->type << std::endl;
	} else {
		std::cout << "broodmandje is leeg" << std::endl;
	}
}

void Broodmandje::voegToe(std::string type) {
	broodje = new Broodje(type);
}
