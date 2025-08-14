//flow of c program: processing --> compilation --> assembly  --> linking --> loading  memory means RAM

//variable is name stored in memory location 

//int a // declaration
//int a=3; // initialization
//varalble name start with _ ,alphabets
//varialbe can not start with digit,reserved keywords


//basic datatype: int,char,float,double
//derived datatype: array,pointor,structure,union
//enumeration datatype: emum
//void datatype: void

#include<stdio.h>
 int main(){
    printf("%lu",sizeof(int));  // 4 bytes 32 bit
    printf("%lu",sizeof(float));  // 4 bytes 32 bit
    printf("%lu",sizeof(char));  // 1 bytes 8 bit
    printf("%lu",sizeof(double));  // 8 bytes 64 bit

    int a=0;
    scanf("%d",&a);
    printf("%d",a);

    return 0;
 }