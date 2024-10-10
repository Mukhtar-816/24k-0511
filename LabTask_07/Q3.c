#include <stdio.h>
int main()
{
    int arr[4] = {1, 5, 10, 15}, max = arr[0], min = arr[0];

    for (int i = 0; i < 6; i++)
    {
        max = max > arr[i] ? max : arr[i];
    }

    for (int i = 0; i < 6; i++)
    {
        min = arr[i] > min ? min : arr[i];
    }

    printf("max: %d\n min: %d", max, min);

    return 0;
}