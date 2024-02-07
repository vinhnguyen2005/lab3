#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    double b = 7.5;
    char c = 'V';
    //we use %p to print the address and &a, b or c to print out the address of them
    printf("The value and address of integer type are: %d, %p\n",a,&a);
    printf("The value and address of float type are: %.2f, %p\n",b,&b);
    printf("The value and address of character type are: %c, %p\n",c,&c);
    return 0;
}