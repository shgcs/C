#include<stdio.h>

int main(){
//pointer stores the address of another variable
//& address of operator 
//* dereference operator
//%x for hexadecimal value
//%p for address of pointer
int a=3;
int *p = &a;
int *c = p;

printf("%d %x %p \n",*c,*c,*c);
printf("%d %x %p \n",c,c,c);
printf("%d %x %p \n",&c,&c,&c);


//null pointer
//int *ptr;
int *ptr =NULL;
printf("%p \n",ptr);

    return 0;
}