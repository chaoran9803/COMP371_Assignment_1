#include <iostream>
#include "function.h"
using namespace std;

arrayFunction::arrayFunction()
{
    // constructor
}

int arrayFunction::createArray(int size, int *&arr)
{
    arr = new int[size];
    return 0;
}

void arrayFunction::initializeArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
}

void arrayFunction::printArray(int *arr, int size)
{
    if (size <= 0 || arr == nullptr)
    {
        cout << "Array is empty or not initialized." << endl;
        return;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

void arrayFunction::deleteArray(int *&arr)
{
    delete[] arr;
    arr = nullptr;
}
