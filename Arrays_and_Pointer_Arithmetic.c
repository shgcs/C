#include <stdio.h>

int main()
{ // int take 4 byte = 32 bit
    int a = 34;
    int *ptra = &a;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 1); //+4 due to int take 4 byte depends upon architecture
    printf("%d\n", ptra - 1); //-4 due to minus -1
    printf("%d\n", ptra++);   //+4 due to add 1
    printf("%d\n", ptra--);   //-4 due to minus -1

    // on arrays
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *arrptr = arr;
    printf("%d\n", arr[0]);
    printf("%d\n", &arr[0]);
    printf("%d\n", &arr[1]); //+4 due to add 1
    printf("%d\n", arr);
    printf("%d\n", arr + 1); //+4 due to add 1

    //*(value_of_address) used to print value at address
    printf("%d\n", *(&arr[0]));
    printf("%d\n", *(&arr[1])); 
    printf("%d\n", *(arr));
    printf("%d\n", *(arr + 1));
    // arr++ and arr-- it will throw error in array
    // arrptr++ and arrptr-- can do because of it stored the address of array

    // arr[0] == *(arr+0);
    printf("%d\n", arr[0]);
    printf("%d\n", *(arr + 0));

    return 0;
}