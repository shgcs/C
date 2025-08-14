
#include <stdio.h>

int factorial(int number)
{

    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {    printf("the %d\n",number);
        return number * factorial(number - 1);
        // n=5;  n= 5*4  n*(n-1)
    }
}
int main()
{
    int num;
    printf("enter the number you want the factorial");
    scanf("%d", &num);
    printf("the factorial of %d and %d", num, factorial(num));

    return 0;
}


/*
#include<stdio.h>
void func(int n){

  if(n!=0){
    func(n-1);
    printf("%d\n",n);
  }
}
int main(){
func(5);

    return 0;
}
*/
