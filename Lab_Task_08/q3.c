#include <stdio.h>
int main()
{
    int saddle, rowmin, colmax, i;
    int arr[3][3];
    printf("enter elements of an array\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("element %d:", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        rowmin = arr[i][0];

        for (int k = 1; k < 3; k++){
            if (arr[i][k] < rowmin){
                rowmin = arr[i][k];
                colmax = k;
            }

            if (rowmin > arr[i+1][k]){
                saddle = rowmin;
            }
        }
    }


            printf("saddle point id %d", saddle);

    return 0;
}