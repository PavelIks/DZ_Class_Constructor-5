#include <iostream>
#include"C_User.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    const int size = 5;
    C_User* arr[size];

    arr[0] = new C_User((char*)"Натюре", (char*)"Прохет", 19);
    arr[1] = new C_User((char*)"Генерал", (char*)"Сасисов", 19);
    arr[2] = new C_User((char*)"Капитан", (char*)"Колбасов", 56);
    arr[3] = new C_User((char*)"Джонни", (char*)"Повар", 3);
    arr[4] = new C_User((char*)"Император", (char*)"Вантузов", 12);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i]->Convert_to_String();
    }

    // Можно использовать, но вместо ~C_User(), который прописывается в C_User.h и C_User.cpp
    /*for (int i = 0; i < size; i++)
    {
        delete arr[i];
    }*/
}