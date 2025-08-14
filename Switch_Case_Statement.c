#include <stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf("the age is 3\n");
        break;

    case 13:
        printf("the age is 13\n");
        break;
    case 18:
        printf("the age is 18+");
        break;

    default:
        printf("age is not 3,13,18");
        break;
    }

/*
    int n=1;
    switch (n)
    {
    case 1:
        printf("you entered 1\n");
        break;

    case 2:
        printf("you entered 2\n");
        break;

    case 3:
        printf("you entered 3\n");
        break;

    default:
        printf("you not entered 1,2,3");
        break;
    }
*/
    return 0;
}