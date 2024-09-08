#include <stdio.h>

int main () {

    float x1, x2, y1, y2, slope;

    printf("\nEnter Points in format x1, y1, x2, y2 : ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);               

     // if conditions for invalid input can be added as welll for use case.

    slope = (y2 - y1)/ (x2 - x1);

    printf("\nThe calculated Slope is : %.3f\n", slope);


    return 0;
};