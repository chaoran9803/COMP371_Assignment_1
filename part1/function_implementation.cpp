#include <iostream>
#include "function.h"
using namespace std;

arrayFunction::arrayFunction()
{
    // constructor
}

arrayFunction::~arrayFunction()
{
    // destructor
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
        arr[i] = i; // initialize array with values 0 to size-1
    }
}

void arrayFunction::printArray(int *arr, int size)
{
    if (size <= 0 || arr == nullptr)
    {
        cout << "Array is empty or not initialized." << endl;
        return;
    } // check if the array is empty or not initialized
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
