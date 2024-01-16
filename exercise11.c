#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int checkPalindrome(int n, int size)
{
  // 101 101
  // 123 321
  int sum = 0;
  int total = 0;
  int num = n;

  for (int i = 0; i < size; i++)
  {
    sum = n % 10;
    n = n / 10;
    // 321   100*3=300   10*2=20  1*1=1   300+20+1=321
    int temp = 1;
    for (int j = 1; j < size - i; j++)
    {
      temp = temp * 10;
    }

    total += (temp * sum);
  }

  if (num == total)
  {
    return 1;
  }

  return 0;
}

int main()
{

  int n;
  printf("Enter the Number : ");
  scanf("%d", &n);
  int size = 1;

  if (checkPalindrome(n, size) == 1)
  {
    printf("%d is the Palindrome Number", n);
  }
  else
  {
    printf("%d is not the Palindrome Number", n);
  }

  return 0;
}
