#pragma once
#include <string>
class C_User
{
public:
	C_User();
	/*C_User(char _name);*/
	C_User(char* name, char* surname, short age);
	const char* show_info();



	std::string Convert_to_String()
	{
		std::string s = std::to_string(age);
		return s + "\n" + name + "\n" + surname + "\n";
	}

private:
	char* name;
	char* surname;
	short age;
};
