#include <stdio.h>
#include <stdlib.h>


int main(){
    int *arr, n, sum = 0;

    printf("Enter the size of list : ");
    scanf("%d", &n);

    arr = (int *)malloc(n*sizeof(int));

    for (int i = 0; i < n; ++i){
        printf("Enter the %d Elemnet : ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of elements is : %d", sum);

    free(arr);


}