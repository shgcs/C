#include <stdio.h>
#include <string.h>
//structure is user defined datatype
//int int : 8 bytes memory location in structure
//we can defined multiple variable in structure
struct student
{
    int id;
    char fav_char;
    char name[32];
} herry, mohit;
// struct student herry,mohit;

void print()
{

    printf("\n%s", herry.name);
}
int main()
{
    //. is called as structure member operator
    // struct student herry,mohit;

    herry.id = 1;
    mohit.id = 2;
    strcpy(herry.name, "herry");
    strcpy(mohit.name, "mohit");
    printf("%d %d %s %s", herry.id, mohit.id, herry.name, mohit.name);
    print();
    return 0;
}