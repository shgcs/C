#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char fav_char;
    char name[32];
} herry, mohit;
// struct student herry,mohit;

void print(){

    printf("%s\n",herry.name);
}
int main()