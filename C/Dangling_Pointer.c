// this pointer point to free memory variable/location 
#include <stdio.h>
#include <stdlib.h>

int functionDangling()
{
    int a, b, sum;
    int a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}

int main()
{
    int *ptr = (int *)malloc(7 * sizeof(int));

    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr);   // ptr is a dangling pointer

    int *dangptr = functionDangling();   // dangptr is a dangling pointer

    int *danglingPtr;
    {
        int a = 12;

        danglingPtr = &a;
    }

    // a goes out of scope/deleted
    // danglingPtr is a dangling pointer

    return 0;
}
