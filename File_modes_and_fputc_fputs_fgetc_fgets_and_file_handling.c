#include <stdio.h>
// modes:
// r for reading
// w for writting
// r+ for reading and writting with previous and new string character merge
// w+ for reading and writting with previous and new string character not merge
// a+ for adding new string

// functions :
// fputs() for put the string
// fputc() for put the character
// fgets() for access the string
// fgetc() for access the character
int main()
{

    FILE *ptr = NULL;
    // ptr=fopen("file.txt","r");
    // ptr=fopen("file.txt","w");
    // ptr=fopen("file.txt","r+");
    // ptr=fopen("file.txt","w+");
    ptr = fopen("file.txt", "a");

    /*
    char ch = fgetc(ptr);
    printf("%c\n",ch);

     ch = fgetc(ptr);
    printf("%c\n",ch);

     ch = fgetc(ptr);
    printf("%c\n",ch);
    */

    /*
    char str[4];
    fgets(str,9,ptr);
    printf("%s\n",str);
    */


    fputc('o', ptr);
    fputs("this is file", ptr);


    fclose(ptr);
    return 0;
}