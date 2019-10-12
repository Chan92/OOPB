#include "pch.h"
#include "Person.h"

Person::Person() {}

//Person::Person(std::string _name, int _age) : Person(name, age) {}
Person::Person(const std::string _name, int _age) : name(_name), age(_age) {}

std::string Person::getName() {
	return name;
}

int Person::getAge() {
	return age;
}