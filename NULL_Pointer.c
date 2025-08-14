#include <stdio.h>
// used to check pointer is legitimate or not
// can not dereferencing to null pointer
int main()
{
//referencing : when we assign value of address to pointer variable
//dereferencing: when print to this pointer variable
    int a = 34;
   // int *ptr = NULL;//NULL pointer 
    int *ptr; //this is also NULL pointer because of not assign the any types of value to pointer variable

    if (ptr == NULL)
    {
        ("the address of a is %d\n", *ptr);
    }
    else
    {
        printf("the pointer is a null pointer and cannot be dereferenced\n");
    }

    return 0;
}