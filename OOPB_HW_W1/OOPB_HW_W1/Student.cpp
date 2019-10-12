#include "pch.h"
#include "Student.h"

Student::Student() {}
Student::Student(std::string _name, int _age) : Person(_name, _age) {}
Student::Student(std::string _name, int _age, int _studentId) : Person(_name, _age), studentId(_studentId) {}

int Student::getStudentId() {
	return studentId;
}