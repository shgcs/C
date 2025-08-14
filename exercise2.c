#include <stdio.h>

int main()
{
    char n;
    printf(" enter the number : \n 1 for inches to foot \n 2 for cms to inches \n 3 for pound to kgs \n 4 for kms to miles \n 5 for inches to meters \n'q' for quit \n \a");
    scanf(" %c", &n);
    
    while (n != 'q')
    {
        if (n == '1')
        {
            float inches;
            printf("enter the inches : ");
            scanf("%f", &inches);
            float foot = 0.0833333;
            float total = foot * inches;
            printf("%f inches = %f foot \n", inches, total);
        }

        else if (n == '2')
        {
            float cms;
            printf("enter the cms : ");
            scanf("%f", &cms);
            float inches = 0.393701;
            float total = inches * cms;
            printf("%f cms = %f inches \n", cms, total);
        }

        else if (n == '3')
        {
            float pound;
            printf("enter the pound : ");
            scanf("%f", &pound);
            float kgs = 0.453592;
            float total = kgs * pound;
            printf("%f pound = %f kgs \n", pound, total);
        }

        else if (n == '4')
        {
            float kms;
            printf("enter the kms : ");
            scanf("%f", &kms);
            float miles = 0.621371;
            float total = miles * kms;
            printf("%f kms = %f miles \n", kms, total);
        }

        else if (n == '5')
        {
            float inches;
            printf("enter the inches : ");
            scanf("%f", &inches);
            float meters = 0.0254;
            float total = meters * inches;
            printf("%f inches = %f meters \n", inches, total);
        }

        printf(" enter the number : \n 1 for inches to foot \n 2 for cms to inches \n 3 for pound to kgs \n 4 for kms to miles \n 5 for inches to meters \n'q' for quit \n \a");
        scanf(" %c", &n);
    }
    return 0;
}
