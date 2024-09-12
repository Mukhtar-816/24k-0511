#include <stdio.h>
int main()
{

    float shopping_Cost, discount, discounted_Cost;

    printf("Enter the Shopping cost: ");
    scanf("%f", &shopping_Cost);

    if (shopping_Cost >= 500 && shopping_Cost <= 2000)
    {
        discount = (shopping_Cost / 100) * 5;
    }
    else if (shopping_Cost > 2000 && shopping_Cost <= 4000)
    {
        discount = (shopping_Cost / 100) * 10;
    }
    else if (shopping_Cost > 4000 && shopping_Cost <= 6000)
    {
        discount = (shopping_Cost / 100) * 20;
    }
    else if (shopping_Cost > 6000)
    {
        discount = (shopping_Cost / 100) * 35;
    }

    discounted_Cost = shopping_Cost - discount;

    printf("The Actual Cost is :%f\n The Discount applied is :%f\n The Final Cost is :%f", shopping_Cost, discount, discounted_Cost);

    return 0;
}