#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *ch;
    ch = argv[1];
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);
    // atoi() is used to convert the string into integer
    printf("%s", ch);
    if (1 == ch)
    {
        printf("addition of a and b : %d\n", a + b);
    }
    else if (2 == ch)
    {
        printf("subtraction of a and b : %d\n", a - b);
    }
    else if (3 == ch)
    {
        printf("multiplication of a and b : %d\n", a * b);
    }
    else if (4 == ch)
    {
        printf("division of a and b : %d\n", a / b);
    }

    return 0;
}