#include "C_User.h"
#include <iostream>
C_User::C_User()
{
	this->_name = this->_surname = (char*)"Я ХЗ кто ты или шо ты :-)";
	this->_age = 0;
}
/*C_User::C_User(char _val)
{
	this->_name = this->_surname = _val;
}*/
C_User::C_User(char* _name, char* _surname, short _age)
{
	this->_name = _name;
	this->_surname = _surname;
	this->_age = _age;
}
void C_User::show_info()
{
	std::cout << "\n";
	std::cout << "Name: " << this->_name << "\t\t";
	std::cout << "Surname: " << this->_surname << "\t\t";
	std::cout << "Age: " << this->_age << "\t\t";
	std::cout << "\n";
}
