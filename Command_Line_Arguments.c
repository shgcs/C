#include <stdio.h>
// command line arguments :
// file_name.exe string_name1 string_name2 string_name.....n number of string
int main(int argc, char const *argv[])
{

    printf("the value of argc is %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("%d and %s\n", i, argv[i]);
    }

    return 0;
}