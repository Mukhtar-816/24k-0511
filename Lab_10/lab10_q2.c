#include <stdio.h>
#include <math.h>
struct distane
{
    int x;
    int y;
};
float cal(int x, int y)
{

    float di = sqrt(pow(x, 2) + pow(y, 2));
    return di;
}

int checker(int x, int y, int x1, int x2, int y1, int y2)
{
    if ((x >= x1 && x <= x2) && (y >= y1 && y <= y2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x1, x2, y1, y2;
    printf("emter the value of  x1, x2, y1 and y2: ");
    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
    int x = (x2 - x1), y = (y2 - y1);
    struct distane d;
    d.x = x;
    d.y = y;

    float c = cal(d.x, d.y);
    printf(" The distance is : %.2f", c);
    checker(d.x, d.y, x1, x2, y1, y2) ? printf("\nThe point lies inbetween the boundary.") : printf("\nThe point doesnot lie inbetween the boundary");
}