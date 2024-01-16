#include <stdio.h>
// static variable preserve/store the updated/previous values
// we can't assign the function calling to static variable
// we can assign constant literal value
int b=34;
int func1()
{
   static int aa=3;
return aa++;
    
}
int main()
{     
  printf("%d\n",func1()) ;
  printf("%d\n",func1()) ;
  printf("%d\n",func1()) ;
 
    return 0;
}