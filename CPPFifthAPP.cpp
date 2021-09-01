#include <iostream>
#include"C_User.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	int size = 2;
	C_User* arr = new C_User[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = C_User((char*)"KukuA-1", (char*)"KukuB-1", 1);
		arr[i] = C_User((char*)"KukuA-2", (char*)"KukuB-2", 2);
		arr[i] = C_User((char*)"KukuA-3", (char*)"KukuB-3", 3);
	}

	std::cout << arr->Convert_to_String();

	delete[]arr;
}
