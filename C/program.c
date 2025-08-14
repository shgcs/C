#include <stdio.h> //preprocessor command

int main() // main() is a built in function
{
    int a, b;
    printf("enter number a\n");   //\n for newline
    scanf("%d", &a);  //&a address of a
    printf("enter number b\n");
    scanf("%d", &b);
    printf("addition of a and b : %d", a + b);

    return 0;
}
//behind the some processes of .c file when we run to this file
//gcc -Wall -save-temps main.c -o herry    //this is flags/commands
//preprocessing compilation assembly linking
//preproessing : In .i file for preprocessed output stored and expand to macros and remove the comments and #include statement resolve
//compilation : In .s file for assembly level instractions
//assembly : In .o file for machine level instractions 
//linking : In .exe file for linking and execution