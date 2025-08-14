#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

void greetAndExecute(int (*fptr)(int, int))
{
    printf("good morning\n");
    printf("the sum of 5 and 7 is %d\n", fptr(5, 7));
}
int main()
{
    int (*ptr)(int, int);
    ptr = &sum;
    greetAndExecute(ptr);
}

/*
#include <stdio.h>
int avgnum(int a, int b)
{
    return (a + b) / 2;
}

void func(int (*fptr)(int, int))
{
    printf("the average number is %d\n", fptr(5, 7));
}
int main()
{
    int (*ptr)(int, int);
    ptr = &avgnum;
    func(ptr);
}
*/