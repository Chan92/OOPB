#include "pch.h"
#include "Broodje.h"
#include <iostream>

Broodje::Broodje() {
	std::cout << "broodje default ctor" << std::endl;
}

Broodje::Broodje(std::string hetType) : type (hetType) {
	std::cout << "broodje ctor" << hetType << std::endl;
}

Broodje::~Broodje() {
	std::cout << "broodje dtor:" << type << std::endl;
}