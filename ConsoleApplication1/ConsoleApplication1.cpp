#include <iostream>
#include <string>
#include <Windows.h>
#include "Sattarova.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int data[] = { 12,4,7, 523, 18,22,6,15,19,21 ,23,6, 2024 ,8,7 ,32,31,504, 98, 4567,45673,54545,4234,104,2947,247, };

	int razmer = size(data);

	_sortByDigitCount(data, razmer);
	for (size_t i = 0; i < razmer; i++)
	{
		cout << data[i] << endl;
	}
}