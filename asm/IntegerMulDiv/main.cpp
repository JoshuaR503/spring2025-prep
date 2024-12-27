// SignedDivMod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


extern "C" int IntegerMulDiv(int a, int b, int* prod, int* quo, int* rem);

int main()
{
    int a = 31, b = 7;
    int prod = 0, quo = 0, rem = 0;
    

    int rv = IntegerMulDiv(a, b, &prod, &quo, &rem);

    printf("Result: %4d", rv);

    return 0;
}

