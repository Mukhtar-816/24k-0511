#include<stdio.h>
int main(){
    
    int Number, res;

    printf("Enter the NUmber:");
    scanf("%d", &Number);

    res = (Number % 3 == 0) ? 1 : 0;

    if (res){
        printf("This Numgber %d is multiple of 3", Number);
    }
    else {
        printf("This Number %d is not a multiple of 3", Number);
    }


    return 0;
}