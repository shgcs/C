#include <stdio.h>
/*
typedef struct student{
    int id;
}std;
*/

int main()
{
 
    /*
    typedef unsigned long ul; // used to create user defined datatype
    ul l1, l2, l3;

    typedef int integer;
    integer a = 4;
    printf("%d\n", a);
    */

    // std  s1,s2;
    // s1.id = 123;

    // printf("%d\n",s1.id);

    // int a,b;
    typedef int *intPointer;
    intPointer a, b;
    int c = 89;
    a = &c;
    b = &c;


    return 0;
}