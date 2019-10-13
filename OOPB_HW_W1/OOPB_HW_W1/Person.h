#pragma once
#include <string>

class Person {
	private:
		std::string name;
		int age;

	public:
		Person();
		Person(std::string _name, int _age);
		std::string getName();
		int getAge();
};