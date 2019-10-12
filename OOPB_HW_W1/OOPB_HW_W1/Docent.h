#pragma once
#include "Person.h"
#include <iostream>

class Docent : public Person {
	private:
		float salary;

	public:
		Docent();
		Docent(std::string _name, int _age);
		Docent(std::string _name, int _age, float _salary);
		float getSalary();
};