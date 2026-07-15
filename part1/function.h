#ifndef FUNCTION_H
#define FUNCTION_H

class arrayFunction
{
public:
    arrayFunction();

    int createArray(int size, int *&arr);

    void initializeArray(int *arr, int size);

    void printArray(int *arr, int size);

    void deleteArray(int *&arr);
};

#endif
