#include <stdio.h>
#define PI 3.14 // preprocessor and it is way to define constant
int main()
{
    // format specifier
    //%d for int
    //%f for float
    //%c for char
    //%e for long
    //%lf for double

    int a = 8;
    float b = 7.333;

    printf("The value of a is %d and the value fo b is %f\n", a, b);

    printf("float value : %8.3f\n", b); // here 8 is character space and 3 is accuracy

    printf("float value : %-18.3f this\n", b);

    const int aa = 8; // const means we can not change the value and constant

    printf("%f\n", PI);

    // escape sequence
    //\a for alarm or beep
    //\b for backspace
    //\n for newline
    //\t for tab/space
    //\\ for backslash
    //\' for single quote
    //\" for double quote

    printf("my \t backslash \\n");

    // single line comment
    /*
    multiline comment
    */
    return 0;
}