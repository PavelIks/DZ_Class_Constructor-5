#include "C_User.h"
#include <iostream>
#include <string>
C_User::C_User()
{
	this->name = this->surname = (char*)"Я ХЗ кто ты или шо ты :-)";
	this->age = 0;
}

std::string C_User::Convert_to_String()
{
	std::string s = std::to_string(age);
	return s + "\n" + name + "\n" + surname + "\n";
}

C_User::C_User(char* name, char* surname, short age)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
}

C_User::~C_User()
{
	delete[] name;
	delete[] surname;
}