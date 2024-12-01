#include <stdio.h>

void print_arr_recursive(int arr[], int index, int size)
{

    if (index == size)
    {
        return;
    }

    printf("%d ", arr[index]);

    print_arr_recursive(arr, index + 1, size);
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: ");
    print_arr_recursive(arr, 0, size);
    printf("\n");
    return 0;
}
