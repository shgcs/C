#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char Name[20] = "tom";
  char Item[3] = "33";
  char Outlet[22] = "HTM Outlet";
  /*
       printf("Enter the Name : ");
       scanf("%s",&Name);

       printf("Enter the Item : ");
       scanf("%d",&Item);

       printf("Enter the Outlet : ");
       scanf("%s",&Outlet);
   */

  FILE *ptr = NULL;
  char ch;

  ptr = fopen("Letter.txt", "r");

  // fscanf(ptr, "%c", ch);
  // printf("value from txt file : %c\n", ch);
  char total[6000] = "";

  int i = 0;
  do
  {
    ch = fgetc(ptr);
    total[i] = ch;
    i++;

  } while (ch != EOF);

  int count = 0;
  int w = 1;
  int t1 = 0;
  int t2 = 0;
  int t3 = 0;
  int t4 = 0;

  for (int j = 0; j <= strlen(total); j++)
  {
    if (total[j] == '{' || total[j] == '}')
    {
      count++;
    }

    if ((count >= 1 && count <= 4) && w == 1)
    {
      if (t1 < strlen(Name))
      {
        total[j] = Name[t1];
      }
      else
      {
        total[j] = ' ';
      }

      t1++;
    }
    if ((count >= 1 && count <= 4) && w == 2)
    {

      if (t2 < strlen(Item))
      {
        total[j] = Item[t2];
      }
      else
      {
        total[j] = ' ';
      }

      t2++;
    }
    if ((count >= 1 && count <= 4) && w == 3)
    {

      if (t3 < strlen(Outlet))
      {
        total[j] = Outlet[t3];
      }
      else
      {
        total[j] = ' ';
      }
      t3++;
    }

    if ((count >= 1 && count <= 4) && w == 4)
    {

      if (t4 < strlen(Outlet))
      {
        total[j] = Outlet[t4];
      }
      else
      {
        total[j] = ' ';
      }
      t4++;
    }

    if (count == 4)
    {
      w++;
      count = 0;
    }
  }

  char newstring[200];
  
  

  int j = 0;
  do
  {

    if ((total[j] == ' ' && total[j + 1] != ' ') || (total[j] != ' ' && total[j + 1] == ' ') || (total[j] != ' ' && total[j + 1] != ' '))
    {
      newstring[j] = total[j];
      printf("%c", newstring[j]);
    }
    j++;

  } while (j < strlen(total));

  printf("\n %d\n", strlen(newstring));
  printf("\n%s",newstring);

  ptr = fopen("Letter.txt", "w");
  fprintf(ptr, "%s", total);
  fclose(ptr);

  return 0;
}