#include <stdio.h>

int main() {
    double arr[9];
    double sum = 0;

    printf("Enter 9 elements of the array (space-separated): ");
    for (int i = 0; i < 9; i++) {
        scanf("%lf", &arr[i]);
    }

    for (int i = 0; i < 9; i++) {
        sum += arr[i];
    }

    printf("Sum of the elements: %lf\n", sum);

    return 0;
}
