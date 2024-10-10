#include<stdio.h>
int main(){

    int arr[5] = {1, 2, 3, 4, 5}, new_arr[5];

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i= 0; i < length; i++){
        new_arr[i] = arr[length - 1 - i];

        printf("%d ", new_arr[i]);
    }

    

    return 0;
}