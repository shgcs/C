#include<stdio.h>

void printstr(char str[6]){
   /*
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
   */

  for (int i = 0; i < 6 ; i++)
  {
        printf("%c",str[i]);
  }
  

    
}
int main(){
// string need null character \0 for ending the string 
//string ain't datatype in c
//in c we defined to string by using char array

//char str[6]={'h','a','r','r','y'};
//char str[5]="herry";
//printstr(str);

char str[34];
gets(str);  //input for string
printf("%s\n",str);  //print the string
puts(str);  //print the string
    return 0;

}
