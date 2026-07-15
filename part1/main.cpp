#include <iostream>
#include "function.h"
using namespace std;

int main()
{
    int size = 10;
    int *arr = nullptr;

    arrayFunction af;
    af.createArray(size, arr);
    af.initializeArray(arr, size);
    af.printArray(arr, size);
    af.deleteArray(arr);
    af.printArray(arr, size);

    return 0;
}