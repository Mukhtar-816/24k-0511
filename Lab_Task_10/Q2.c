#include <stdio.h>
#include <math.h>

struct Coordinates
{
    int x;
    int y;
};

int distanceCalculator(int x1, int y1, int x2, int y2)
{
    int x = x2 - x1;
    int y = y2 - y1;
    float distance = sqrt(pow(x, 2) + pow(y, 2));

    printf("\nThe distance is %.2f", distance);

    if (x >= x1 && x <= x2 && y <= y2 && y >= y1)
    {
        printf("\nThe Point Lies In-between the rectangular boundary.");
    }
    else
    {
        printf("\nThe Point doesnot Lie In-between the rectangular boundary.");
    }
};


int main(){
    struct Coordinates d;
    int x1, x2, y1, y2;

    printf("Enter the Points as follows (x1, y1, x2, y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2 );

    d.x = x2 - x1;
    d.y = y2 - y1;

    distanceCalculator(x1, y1, x2, y2);
}