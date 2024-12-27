#include <iostream>


extern "C" void CalculateSum(int a, int b, int c, int* s1, int* s2, int* s3);

int main()
{
    int a = 2, b = 3, c = 4;
    int s1, s2, s3;


    CalculateSum(a, b, c, &s1, &s2, &s3);

    printf("Inputs: a = %d, b = %d, c = %d\n", a, b, c);
    printf("Outputs: sum = %d, square = %d, cube = %d\n", s1, s2, s3);

	
}
