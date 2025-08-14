// int int=int
// int float=float
// float float=float
#include <stdio.h>

int main()
{
    int a = 2;
    // float b= 3;
    int b = 3;

    // airthmetic operator
    printf("a + b = %f\n", a + b);
    printf("a - b = %f\n", a - b);
    printf("a * b = %f\n", a * b);
    printf("a / b = %f\n", a / b);
    // printf("a % b = %d\n",a%b);

    // relational operator
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a <= b = %d\n", a <= b);
    printf("a >= b = %d\n", a >= b);

    // logical operator
    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("a ! b = %d\n", !a);

    // bitwise operator
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b); // a exclusive OR operator or XOR operator

    // other bitwise operator
    //~ :binary one's complement operator
    //<< :binary left shift operator
    //>> :binary right shift operator

    // assignment operator
    //= , += , -= , *= , /=

    //miscellaneous operator
    //sizeof() , & , * , ?:

    // operator precedence
    //()
    
}