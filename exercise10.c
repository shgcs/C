#include <stdio.h>
// matrix multiplication for 2D array
// a={{1,2},{3,4}};
// b={{3,2},{7,0}};
void MatrixMultiplication()
{

    int row1, row2, column1, column2;
    int sum = 0;

    printf("Enter the Row's for 2D Array 1 : ");
    scanf("%d", &row1);
    printf("Enter the Column's for 2D Array 1 : ");
    scanf("%d", &column1);
    printf("Enter the Row's for 2D Array 2 : ");
    scanf("%d", &row2);
    printf("Enter the Column's for 2D Array 2 : ");
    scanf("%d", &column2);

    if (column1 == row2)
    {
        printf("We can multiply\n");
    }
    else
    {
        printf("We can not multiply\n");
    }

    int a[row1][column1]; 
    int b[row2][column2]; 
    int c[2][2];

    printf("Enter the first matix\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the second matix\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            for (int k = 0; k < 2; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    
    MatrixMultiplication();

    return 0;
}