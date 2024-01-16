#include <stdio.h>

// goto statement used to break the loop and skip the statement
int main()
{
    goto end;

    printf("hello c/c++\n");

end:
    printf("we are at end");

    /*  int num;
      for (int i = 0; i < 8; i++)
      {
          printf("%d",i);
          for (int  j = 0; j < 8; j++)
          {
             printf("enter the number \n");
             scanf("%d",&num);
             if(num==0){
              goto end;
             }
          }

      }
      end:  */
    return 0;
}