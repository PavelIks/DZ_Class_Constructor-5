#include <iostream>
#include"C_User.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	int size = 5;



	C_User* arr1 = new C_User[size];
	C_User* arr2 = new C_User[size];
	C_User* arr3 = new C_User[size];
	C_User* arr4 = new C_User[size];
	C_User* arr5 = new C_User[size];
	C_User* arr6 = new C_User[size];



	for (int i = 0; i < size; i++)
	{
		arr1[i] = C_User((char*)"KukuA-1", (char*)"KukuB-1", 1);
		arr2[i] = C_User((char*)"KukuA-2", (char*)"KukuB-2", 2);
		arr3[i] = C_User((char*)"KukuA-3", (char*)"KukuB-3", 3);
		arr4[i] = C_User((char*)"KukuA-4", (char*)"KukuB-4", 4);
		arr5[i] = C_User((char*)"KukuA-5", (char*)"KukuB-5", 5);
		arr6[i] = C_User((char*)"KukuA-6", (char*)"KukuB-6", 6);
	}



	arr1->show_info();
	arr2->show_info();
	arr3->show_info();
	arr4->show_info();
	arr5->show_info();
	arr6->show_info();



	delete[]arr1;
	delete[]arr2;
	delete[]arr3;
	delete[]arr4;
	delete[]arr5;
	delete[]arr6;
}