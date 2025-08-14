/*
//in DMA we allocate memory to variable in the form of bytes
//malloc() memory allocation
//calloc() contiguous memory
//realloc() reallocation
//free() free to memory

//in malloc() all the values at allocated memory are initilized to garbage values

//in calloc() all the values at allocated memory are initilized to 0

//in realloc() we can change the size of memory using realloc()

//in free() we can do free to memory using free()
*/
#include <stdio.h>
#include <stdlib.h> //for DMA ( Dynamic Memory Allocation )

int main()
{
    // we can store multiple value in pointer variable like arrays

    int *ptr, n;
    printf("enter the size of array/pointer : \n");
    scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int));

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter the array/ptr %d : ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    printf("enter the new size again of array/pointer : \n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter the array/ptr %d : ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);



/*
int *a;
int n;
printf("enter the size : ");
scanf("%d",&n);

a= (int*) malloc(n*sizeof(int));

for (int i = 0; i < n; i++)
{
    printf("enter the value of array pointer %d : ",i);
    scanf("%d",&a[i]);
}

int i=0;
while(i<n){
    printf("%d\n",a[i]);
    i++;
}

free(a);

int l;
printf("enter the size : ");
scanf("%d",&l);
a= (int*) calloc(l,sizeof(int));

for (int i = 0; i < l; i++)
{
    printf("enter the value %d : ",i);
    scanf("%d",&a[i]);
    printf("%d : %d ",i,a[i]);
}

free(a);
*/
    return 0;
}
