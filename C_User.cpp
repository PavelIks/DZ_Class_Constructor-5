#include "C_User.h"
#include <iostream>
#include <string>
#pragma warning(disable:4996) // *
C_User::C_User()
{
	this->name = this->surname = (char*)"Я ХЗ кто ты или шо ты :-)";
	this->age = 0;
}

std::string C_User::Convert_to_String()
{
	std::string s = std::to_string(age);
	return s + ", " + name + ", " + surname + ".\n";
}

C_User::C_User(char* name, char* surname, short age)
{
	/*this->name = name;
	this->surname = surname;*/


	this->name = new char[strlen(name) + 1]; // *
	strcpy(this->name, name); // *

	this->surname = new char[strlen(surname) + 1]; // *
	strcpy(this->surname, surname); // *

	this->age = age;
}

C_User::~C_User()
{
	delete[] name;
	delete[] surname;
}