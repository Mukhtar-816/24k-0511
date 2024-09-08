#include <stdio.h>

int main()
{

    float Tax_Rate, Salary, Tax, Final_Salary;

    printf("\nEnter Tax Rate :");
    scanf("%f", &Tax_Rate);

    printf("\nEnter your Salary :");
    scanf("%f", &Salary);

    if (Tax_Rate >= 1)
    {
        printf("\nInvalid Tax Rate");
    }
    else
    {
        Tax = Salary * Tax_Rate;
        Final_Salary = Salary - Tax;

        printf("\nYour Tax amount is : %.2f \nYour Salary after the paying the Tax is : %.2f", Tax, Final_Salary);
    }

    return 0;
};