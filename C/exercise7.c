#include <stdio.h>

typedef struct driver
{
    char name[8];
    int driving_licence_no;
    char route[8];
    int kms;

} drivers;
int main()
{
    drivers dvr;
    int i = 1;
    do
    {
        printf("enter the name of driver %d : ", i);
        scanf("%s", &dvr.name);
        printf("enter the driving licence no of driver %d : ", i);
        scanf("%d", &dvr.driving_licence_no);
        printf("enter the route of driver %d : ", i);
        scanf("%s", &dvr.route);
        printf("enter the kms of driver %d : ", i);
        scanf("%d", &dvr.kms);

        printf("\ndriver name : %s\n", dvr.name);
        printf("driving licence no : %d\n", dvr.driving_licence_no);
        printf("route : %s\n", dvr.route);
        printf("kms : %d\n\n", dvr.kms);

        i++;
    } while (i <= 3);

    return 0;
}