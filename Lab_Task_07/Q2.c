#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    int arr[n], new_arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        new_arr[n - j - 1] = arr[j];
    }

    printf("{");
    for (int k = 0; k < n; k++)
    {
        printf("%d,", new_arr[k]);
    }
    printf("}");
}