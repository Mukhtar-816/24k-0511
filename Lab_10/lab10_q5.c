#include <stdio.h>
void bubble_sort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubble_sort(arr, n - 1);
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        printf("%d,", arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("enter thr size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n ");
    // Read the array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("orignal array:");
    printarr(arr, n);

    bubble_sort(arr, n);
    printf("sorted array :");
    printarr(arr, n);
    return 0;
}