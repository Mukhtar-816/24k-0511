#include <stdio.h>
#define max_temp 40

void temp_checker(float temp[], int n)
{

    static int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (temp[i] > max_temp)
        {

            printf("%f temperature exceeds the limit\n", temp[i]);
            count += 1;
        }
        else
        {
            printf("the temperature %f is in the limit\n", temp[i]);
        }
    }
    printf("the temeperature exceeds %d times\n", count);
}
int main()
{

    int n;
    printf("enter number of temperatures ");
    scanf("%d", &n);
    float temp[n];
    printf("enter temperature:\n");
    for (int i = 0; i < n; i++)
    {

        scanf("%f", &temp[i]);
    }

    temp_checker(temp, n);

    return 0;
}
