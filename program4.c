#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double* floatadress(double n)
{
    double  *ptr = &n; //pointer to variable to store memory address
    return ptr;       //returning the pointer
}
int main()
{
    double n = 9.0;
    float *ptr = floatadress(n);//calling function and storing returned value in a pointer of type float
    printf("Address of n is %p\n", &n);
}