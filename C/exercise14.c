#include <stdio.h>
#include <math.h>

float Edistance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

void areaOfCircle(int x1, int y1, int x2, int y2, float (*ptr)(int, int, int, int))
{
    printf("Euclidean Distance : %f\n", ptr(x1, y1, x2, y2));
}
int main()
{
    int x1, x2, y1, y2;
    printf("Enter x1 : ");
    scanf("%d", &x1);
    printf("Enter y1 : ");
    scanf("%d", &y1);
    printf("Enter x2 : ");
    scanf("%d", &x2);
    printf("Enter y2 : ");
    scanf("%d", &y2);

    float (*ptr)(int, int, int, int);
    ptr = &Edistance;
    areaOfCircle(x1, y1, x2, y2, ptr);

    return 0;
}