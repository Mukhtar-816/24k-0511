#include <stdio.h>

int printer(int arr[], int size)
{
    int i = (size - 1);
    printf("%d", arr[i]);
    if (size > 1)
    {
        printer(arr, i);
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    printer(arr, 5);
}