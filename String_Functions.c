#include <stdio.h>
#include <string.h>

int main()
{

    char s1[] = "herry"; // ASCII
    char s2[] = "mohit";
    char s3[54];

    printf("%d\n", strlen(s1));
    puts(strrev(s1));

    strcpy(s3, strcat(s1, s2));
    puts(s3);

    printf("%d\n", strcmp(s1, s2));

    /*
     char str1[8];
     char str2[8];
     char str3[54];

     printf("enter the first string : \n");
     gets(str1);
     printf("enter the second string : \n");
     gets(str2);

     strcpy(str3, strcat((strcat(str1, " is a friend of ")), str2));

     puts(str3);
     */

    return 0;
}