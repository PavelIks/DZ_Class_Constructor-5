#include <iostream>
#include"C_User.h"

int main()
{
	setlocale(LC_ALL, "Russian");

        const int size = 3;
        C_User* arr[size];

        arr[0] = new C_User((char*)"KukuA-1", (char*)"KukuB-1", 1);
        arr[1] = new C_User((char*)"KukuA-2", (char*)"KukuB-2", 2);
        arr[2] = new C_User((char*)"KukuA-3", (char*)"KukuB-3", 3);

        for (int i = 0; i < size; i++)
            std::cout << arr[i]->Convert_to_String();
        for (int i = 0; i < size; i++)
            delete arr[i];
}
