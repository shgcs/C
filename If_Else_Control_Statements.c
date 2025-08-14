#include <stdio.h>

int main()
{
    int age;

    printf("enter the age : ");
    scanf("%d", &age);

    printf("You have entered %d as your age\n", age);

    if (age >= 18)
    {
        printf("You can vote!\n");
    }
    else if (age > 10)
    {
        printf("You are between 10 to 18 and you can vote for kids\n");
    }
    else
    {
        printf("You can not vite!\n");
    }

    /*
        int num1, num2;

        printf("you gave science test 1 for Yes and 0 for No: ");
        scanf("%d", &num1);

        printf("you gave math test 1 for Yes and 0 for No: ");
        scanf("%d", &num2);

        if (num1 == 1 && num2 == 1)
        {
            printf("Your reward is 45 rupees");
        }
        else if (num1 == 1)
        {
            printf("Your reward is 15 rupees");
        }
        else if (num2 == 1)
        {
            printf("Your reward is 15 rupees");
        }
    */
}