#pragma once
#include <string>
class C_User
{
public:
	C_User();
	C_User(char* name, char* surname, short age);
	std::string Convert_to_String();

private:
	char* name;
	char* surname;
	short age;
};
