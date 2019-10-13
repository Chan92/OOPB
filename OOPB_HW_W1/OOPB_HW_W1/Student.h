#pragma once
#include "Person.h"
#include <iostream>

class Student : public Person {
	private:
		int studentId;

	public:
		Student();
		Student(std::string _name, int _age);
		Student(std::string _name, int _age, int _studentId);
		int getStudentId();
};