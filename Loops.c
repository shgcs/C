#include <stdio.h>

int main()
{
    int num, index = 0;
     printf("enter a number");
      scanf("%d", &num);

     do
       {
           printf("%d\n", index);
           index = index + 1;
       } while (index < num);
       
    // i=i+1  i+=1 i++

    /*
    while (index < num)
    {
        printf("%d\n", index);
       // index = index + 1;
       //index++;
       index += 1;
    }
    */

    // int i = 0,j=0;   //multiple variable initialize here also
    // second condition they will consider to loop terminate
    /*for (int i = 0, j = 0; i < 2, j < 5; i++, j++)
    {
        printf("%d %d\n", i, j);
    }

   int i = 0;
    for (; i < 5;)
    
    {
        printf("%d\n", i);
        i++;
    }
*/
    return 0;
}


