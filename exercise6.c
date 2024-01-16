#include <stdio.h>
#include <string.h>

void parser(char str[], int length)
{
    int t = 0, tt = 0;
    for (int i = 0; i < length; i++)
    {

        if (str[i] == '>' || str[i] == '<')
        {
            t++;
        }
        else if (t == 2 && str[i] != ' ')
        {
            printf("%c", str[i]);
        }
        else if (t == 2 && (str[i - 1] != ' ' && str[i + 1] != ' '))
        {
            printf("%c", str[i]);
        }
     
    }
}

int main()
{
    char str[] = "   <h1>   this is a heading    </h1>   ";
    int length = strlen(str);
    parser(str, length);

    return 0;
}