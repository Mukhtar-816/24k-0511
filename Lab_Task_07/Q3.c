#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];

    for (int j = 0; j < n; j++)
    {
       if (arr[j] > max){
        max = arr[j];
       }
       if (arr[j] < min) {
        min = arr[j];
       }
    }

    printf("The max is : %d.\nThe min is : %d", max, min);

}