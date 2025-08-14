#include <stdio.h>
int call_by_value(int a)
{

    return a;
}

int call_by_reference(int *a)
{
    return *a;
}
/*
void func(int *x, int *y)
{

    printf("addition : %d and subtraction : %d", *x + *y, *x - *y);
}
*/
/*
int func1(int array[])
{

    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, array[i]);
    }
}
*/

void func2(int ptr[2][2] /* int *ptr */)
{/*
    for (int i = 0; i < 4; i++)
    { //*(ptr +i)
        // ptr[i]
        printf("the value at %d is %d \n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;

    printf("%d \n", ptr[2]);
*/

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
    printf("%d ",ptr[i][j]);
    }
    printf("\n");
    
  }
  
}

int main()
{
   // int a = 4;
    //int b = 3;
    //int arr[] = {23, 13, 3, 4};
    int arr[2][2] = {{2,13},{9,3}}; 
   // printf("%d \n", call_by_reference(&a));
   // printf("%d \n", call_by_value(a));

    // func1(arr);
    func2(arr);
    //  func(&a, &b);
    return 0;
}