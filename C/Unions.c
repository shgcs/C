// union is user defined datatype
//  int int : 4 bytes memory location in union
//we can defined one variable in union
#include <stdio.h>
#include <string.h>
union student
{
    int id;
    char name[34];
    char fav_char;
};

int main()
{

    union student s1;
    s1.id = 1;
    s1.fav_char = 'u';

    strcpy(s1.name, "herry");

    printf(" the is %d \n ", s1.id);
    printf("the is %c \n ", s1.fav_char);
    printf("the is %s \n ", s1.name);

    return 0;
}