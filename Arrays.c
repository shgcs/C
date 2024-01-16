#include <stdio.h>

int main()
{

    // int marks[]={45,234,2,3}; //1d/single arrays/*
    // int marks[4];
    int marks[2][4] = {{45, 234, 2, 3}, {3, 2, 3, 3}}; // 2d/multidimensional  arrays
    /*
    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of %d of array \n",i);
        scanf("%d",&marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d element of the array id %d\n",i,marks[i]);
    }
    */
    /*marks[0]=34;
    printf("marks of student 1 is %d\n",marks[0]);
    marks[0]=345;
    printf("marks of student 1 is %d\n",marks[0]);*/

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}