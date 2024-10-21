#include <stdio.h>
int main()
{
    int n;

    printf("Array Size:");
    scanf("%d", &n);

    int arr[n], occr_arr[n];
    int a = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {

        if (arr[j] == arr[j + 1])
        {
            occr_arr[a] = arr[j];
            a++;
        }
    }

    printf("Number ");
    for (int i = 0; i < a; i++)
    {
        printf("%d,", occr_arr[i]);
    }
    printf("occured more than once. ");
}