#include<stdio.h>

int main () {
     
    int a, b, temp = 0;

    printf("Enter 1st and 2nd Number :");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nThe Swaped Numbers are %d, %d", a, b);


    return 0;
};