#include <stdio.h>
//for integer
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("sum of a and b : %d\n", sum(1, 2));
    int (*fptr)(int, int); // declaring function pointer
    fptr = &sum;           // creating function pointer
    int d = (*fptr)(4, 6); // dereferencing function pointer
    printf("the value of d is %d", d);

    return 0;
}

/*
#include <stdio.h>
//for string
char *func(char ch[])
{
   return ch;
}

int main()
{
   char *(*function_pointer)(char[]);

   function_pointer = &func;

   char *result = (*function_pointer)("herry");
   // char* result = function_pointer("herry");

   printf("%s\n", result);

   return 0;
}
*/