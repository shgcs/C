#include <stdio.h>

int fibo(int n)
{
    // fibo called multiple times
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 0;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    // n 0 1 1 2 3 5 8
    // a=0 b=1; a+b
    // n-1 + n-2
    printf("%d\n", fibo(6));

    int a = 0;
    int b = 1;

    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        a = b-a;
        b = a + b;
        printf("%d ", a);
    }
 
    return 0;
}
