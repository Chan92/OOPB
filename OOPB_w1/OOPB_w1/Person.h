#pragma once
#include <iostream>

class Person {
	protected:
		std::string name;
		int age;

	public:
		Person();
		Person(std::string _name, int _age);
		std::string getName();
		int getAge();
};

