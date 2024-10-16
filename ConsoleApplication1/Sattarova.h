#pragma once
#include <iostream>
#include <string>
using namespace std;

void _sort(int* arr, int razmer)
{

    for (size_t i = 0; i < razmer; i++)
    {
        for (size_t k = 0; k < razmer; k++)
        {
            if (arr[i] < arr[k])
            {
                swap(arr[i], arr[k]);
            }
        }
    }
}

int _DigitCount(int n)
{
    if (n == 0) { return 1; }
    return (int)log10(n) + 1;
}

void _sortByDigitCount(int* arr, int razmer)
{
    for (size_t i = 0; i < razmer - 1; i++)
    {
        for (size_t j = 0; j < razmer - i - 1; j++)
        {
            if (_DigitCount(arr[j]) > _DigitCount(arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
