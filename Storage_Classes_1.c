#include<stdio.h>
#include"Storage_Classes_2.c"

//int sum= 0;
int myfunc(int a,int b){
   //auto int sum=a+b; //by default auto variable
   // extern int sum;
   static int myvar;
   myvar++;
   printf("the myvar is %d\n",myvar);
  // sum=a+b;
    return myvar; 
}
 int sum;

int main(){

//int sum = myfunc(3,5);
//int sum=98;
//printf("the sum is : %d\n",sum);


myfunc(3,5);
myfunc(3,5);
myfunc(3,5);
myfunc(3,5);

register int sum = myfunc(3,5);



    return 0;
}
//auto variable is used in the local scope and global scope
//extern variable used to access the value which is out of scope 
//static variable used to store the previous value
//register variable used to access the request in CPU register