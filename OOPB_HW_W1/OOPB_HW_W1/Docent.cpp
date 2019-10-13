#include "pch.h"
#include "Docent.h"

Docent::Docent() {}
Docent::Docent(std::string _name, int _age) : Person(_name, _age) {}
Docent::Docent(std::string _name, int _age, float _salary) : Person(_name, _age), salary(_salary) {}

float Docent::getSalary() {
	return salary;
}