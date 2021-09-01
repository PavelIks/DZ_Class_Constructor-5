#include "C_User.h"
#include <iostream>
#include <string>
C_User::C_User()
{
	this->name = this->surname = (char*)"Я ХЗ кто ты или шо ты :-)";
	this->age = 0;
}
/*C_User::C_User(char _val)
{
	this->name = this->surname = _val;
}*/
C_User::C_User(char* name, char* surname, short age)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
}


/*const char* C_User::show_info()
{*/
	



	// strcpy_s

	/*char text[99] = " ";
	char* __age = (char*)age;
	strcpy_s(text, this->name);
	strcpy_s(text, this->surname);
	strcpy_s(text, __age);
	return text;*/


	//std::cout << "\n";
	//std::cout << "Name: " << this->name << "\t\t";
	//std::cout << "Surname: " << this->surname << "\t\t";
	//std::cout << "Age: " << this->age << "\t\t";
	//std::cout << "\n";
/*}*/