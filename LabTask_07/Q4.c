#include<stdio.h>
int main(){
    int len, i;

    printf("Enter the size of Array:");
    scanf("%d", &len);

    double arr[len];

    for (i = 0; i < len; i++){
        printf("Element %d:", i + 1);
        scanf("%lf", &arr[i]);
    }
    
    for (i = 0; i < len; i++){
        if (arr[i] == arr[i+1]){
            int occ[6];
            occ[i];
            printf("%d", occ[i]);
        }
        
        
    }
}