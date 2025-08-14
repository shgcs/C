#include <stdio.h>

void func(int arr[], int start, int size)
{
    /*
        if (start >= size)
        {
            return;
        }
        else
        {
            func(arr, start + 1, size);
            printf("%d ", arr[start]);
        }
    */

    for (int i = 0; i < size / 2; i++)
    {
       int temp = arr[i];
        arr[i] = arr[(size - 1) - i];
        arr[(size - 1) - i] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    func(arr, 0, 7);
    /*
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",arr[6-i]);
    }
    */
}