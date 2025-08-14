#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char *e_id;
    int n;

    printf("enter the length for id 1: ");
    scanf("%d", &n);

    e_id = (char *)malloc((n + 1) * sizeof(char));


    if (e_id == NULL)
    { 
        return -1;
    }
    else
    {
        printf("the pointer is a null pointer and cannot be dereferenced\n");
    }
    // getchar() used to get the character and used to in input buffer like enter as an input in scanf()
    printf("enter the employee id 1 : ");
    scanf("%s", e_id); // here we can take input directly due to already dealing with addresses in it
    printf("the id 1 : %s", e_id);

    printf("\n");
    printf("enter the length for id 2 : ");
    scanf("%d", &n);

    e_id = (char *)realloc(e_id, n * sizeof(char));

    if (e_id == NULL)
    {
        return -1;
    }

    printf("enter the employee id 2 : ");
    scanf("%s", e_id);
    printf("the id 2 : %s", e_id);

    printf("\n");
    printf("enter the length for id 3 : ");
    scanf("%d", &n);

    e_id = (char *)realloc(e_id, n * sizeof(char));

    if (e_id == NULL)
    {
        return -1;
    }

    printf("enter the employee id 3  : ");
    scanf("%s", e_id);
    printf("the id 3 : %s", e_id);

    free(e_id);

    return 0;
}
