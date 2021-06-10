#pragma once
class C_User
{
public:
	C_User();
	/*C_User(char _name);*/
	C_User(char* _name, char* _surname, short _age);

	void show_info();
private:
	char* _name;
	char* _surname;
	short _age;
};