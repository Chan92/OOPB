#pragma once
#include "Docent.h"
#include "Student.h"
#include <string>

class Module{
	private:
		std::string className;
		int classroom;
		Docent docent;
		int students[20];
		int studentCount = 0;

	public:
		Module();
		Module(std::string _className, int _classroom, Docent _docent);
		std::string getClassName();
		int getClassroom();
		Docent getDocent();
		void getStudents();
		void setStudent(int _newStudent);
};

