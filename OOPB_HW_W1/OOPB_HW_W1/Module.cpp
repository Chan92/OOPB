#include "pch.h"
#include "Module.h"
#include <iostream>


Module::Module(){}
Module::Module(std::string _className, int _classroom, Docent _docent) : className(_className), classroom(_classroom), docent(_docent){}

std::string Module::getClassName()
{
	return className;
}

int Module::getClassroom(){
	return classroom;
}

Docent Module::getDocent(){
	return docent;
}

void Module::getStudents(){
	for (int i = 0; i < studentCount; i++) {
		std::cout << "student: " << students[i] << std::endl;
	}
}

void Module::setStudent(int _newStudent){
	students[studentCount] = _newStudent;
	studentCount += 1;
	std::cout << "added student, count is: " << studentCount << std::endl;
}