#include <stdio.h>
int main()
{

    int Customer_ID, Unit_Consumend, Amount_Charge, Surcharge_Amount, Net_Amount;
    char name[10];

    printf("Enter Customer Name:");
    gets(name);

    printf("Enter Customer ID:");
    scanf("%d", &Customer_ID);

    printf("Enter Unit Consumed:");
    scanf("%d", &Unit_Consumend);

    if (Unit_Consumend >= 0 && Unit_Consumend <= 199)
    {
        Amount_Charge = 16.20 * Unit_Consumend;
    }
    else if (Unit_Consumend >= 200 && Unit_Consumend < 300)
    {
        Amount_Charge = 20.10 * Unit_Consumend;
    }
    else if (Unit_Consumend >= 300 && Unit_Consumend < 500)
    {
        Amount_Charge = 27.10 * Unit_Consumend;
    }
    else if (Unit_Consumend >= 500)
    {
        Amount_Charge = 35.90 * Unit_Consumend;
    }

    Surcharge_Amount = (Amount_Charge > 18000) ? (Amount_Charge / 100) * 15 : 0;

    Net_Amount = Amount_Charge + Surcharge_Amount;

    printf("Customer ID : %d\nCustomer Name : %s \nUnits Consumed : %d \nAmount Charge : Rs %d \nSurCharge Amount : %d \nNet Amount Paid by Customer : %d", Customer_ID, name, Unit_Consumend, Amount_Charge, Surcharge_Amount, Net_Amount);

    return 0;
}