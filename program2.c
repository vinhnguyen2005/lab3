#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void arrsize(int arr[]) // this function shows that array cannot pass to the function
{
    int size = sizeof(arr) / sizeof(arr[0]); // sizeof(arr) is the size of a pointer, cause a pointer to the first element of the array is what is passed
    printf("Size of array inside function: %d\n", size);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    arrsize(arr);
}

// to accurately determine the size of the array inside the function, we code like this:

/*

void arrsize1(int arr[], int n)
{
    printf("Size of array inside function: %d\n", size);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(arrsize1) / sizeof(arrsize1[0]);
    arrsize1(arr, size);
}


*/
