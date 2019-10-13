// OOPB_HW_W1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include "Student.h"
#include "Docent.h"
#include "Module.h"
#include <iostream>
#include <string>

int main() {
	Student student1 = Student("Mina", 25, 204);
	Student student2 = Student("Ray", 18, 205);
	Docent docent1 = Docent("Piet", 50, 500);

	std::cout << docent1.getName() << std::endl;
	std::cout << docent1.getSalary() << std::endl;
	std::cout << student1.getName() << " " << student1.getStudentId() << std::endl;

	Module module1 = Module("Module 1", 203, docent1);
	std::cout << "class is: " << module1.getClassName() << std::endl;
	std::cout << "teacher: " << module1.getDocent().getName() << std::endl;
	

	module1.setStudent(student1.getStudentId());
	module1.setStudent(student2.getStudentId());
	module1.getStudents();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
