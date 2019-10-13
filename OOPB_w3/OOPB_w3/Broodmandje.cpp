#include "pch.h"
#include "Broodmandje.h"
#include <iostream>

Broodmandje::Broodmandje(){}

Broodmandje::~Broodmandje(){
	std::cout << "Broodmandje: dtor" << std::endl;
	delete broodje;
}


Broodmandje::Broodmandje(const Broodmandje & deAndere){
	std::cout << "Broodmandje: copy-ctor" << std::endl;
	broodje = new Broodje();
	broodje->type = deAndere.broodje->type;
}

Broodmandje& Broodmandje::operator=(const Broodmandje& deAndere){
	std::cout << "Broodmandje: assigment oper" << std::endl;

	if (this != &deAndere) {
		if (broodje) delete broodje;

		broodje = new Broodje();
		broodje->type = deAndere.broodje->type;
		return *this;
	}
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
