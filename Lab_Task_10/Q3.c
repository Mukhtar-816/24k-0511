#include <stdio.h>
#define MAX_TEMP 100

int counter(int n)
{
    static int count;
    int temp;
    printf("Enter the tempreature :");
    scanf("%d", &temp);
    if (temp >= MAX_TEMP)
    {
        count++;
    }
    n == 0 && printf("The Tempreature has exceeded the limit %d times.", count);
    if (n > 0)
    {
        counter(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter Number of Tempreatures: ");
    scanf("%d", &n);
    counter(n - 1);
}