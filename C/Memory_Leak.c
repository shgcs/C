#include <stdio.h>
#include <stdlib.h>
// memory leak means we not did free to pointer or allocated memory
int main()
{
    int a, i = 0;
    int *i2;

    while (i < 4555)
    {
        printf("this is pointer\n");
        i2 = malloc(34444 * sizeof(int));

        if (i % 100 == 0)
        {
            getchar(); // used to take character input
            //putchar(); //used to put character input
        }
        i++;
        free(i2);
    }
    return 0;
}