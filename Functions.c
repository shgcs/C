#include <stdio.h>

/*
int sum(int a,int b){

    return a+b;
}*/

int sum(int a, int b);

void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

void takenumber()
{
    int i;
    printf("enter a number");
    scanf("%d", &i);
    printf("%d", i);
}

void func()
{

    printf("c/c++");
}
int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a, b);
    printstar(7);
    printf("the sum is %d", c);
    takenumber();
    func();

    return 0;
}

int sum(int a, int b)
{

    return a + b;
}