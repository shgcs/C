#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 334;
    int *ptr; // wild pointer
    ptr = &a; // here ptr is not wild pointer
    printf("the value of a is %d\n", *ptr);

    return 0;
}