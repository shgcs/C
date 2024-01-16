/*
triangular star pattern
 *
 **
 ***
 ****
 */

/*
reversed triangular star pattern
*****
****
***
**
*
*/

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("enter the number \n");
    scanf("%d", &n1);
    printf(" enter 1 for triangular star pattern  \n 2 for reversed triangular star pattern \n");
    scanf("%d", &n2);
    if (n2 == 1)
    {
        for (int i = 1; i <= n1; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    if (n2 == 2)
    {
        for (int i = 1; i <= n1; i++)
        {
            for (int j = 0; j <= n1 - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}