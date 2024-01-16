#include <stdio.h>
#include "C_Pre-processor.c"
#define PI 3.14
#define SQUARE(r) r * r

int main()
{
    float var = PI;
    int r = 4;

    printf("this is me %f\n", var);
    printf("the area of this circle is %f\n", PI * SQUARE(r));

    return 0;
}