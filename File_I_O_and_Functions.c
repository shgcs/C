// volatile memory is the temporary memory ex.RAM
// non volatile memory is not the temporary memory ex.HARD DISK
#include <stdio.h>
#include <stdlib.h>
//fopen() opening the file
//fprintf() writting the file
//fscanf() reading the file
//fclose() closing the file

int main()
{
    FILE *ptr = NULL;
    char string[64] = "this is myfile";
    /*
        // reading a file
        ptr = fopen("myfile.txt", "r"); // r for reading mode
        fscanf(ptr, "%s", string);//used to take the input from file
        printf("this content of this file has %s\n", string);
    */
    // writting a file
    ptr = fopen("myfile.txt", "w"); // w for writting mode but prevoius content would be delete
                                    // a for append mode but add content in prevoius content
    fprintf(ptr, "%s", string);     // used to print the statement in file
    fclose(ptr);                    // used to close the file
    
    return 0;
}