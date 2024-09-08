#include <stdio.h>

int main()
{

    float Car_Fuel_Avg_KM_Per_Liter, Fuel_Cost_1st_Trip, Fuel_Cost_2nd_Trip, Total_Fuel_Consumed;
    int Single_Trip_Distance_KM = 1207;
    int First_Fuel_Price_Liter = 118;
    int Second_Fuel_Price_Liter = 123;

    printf("Enter your car's fuel avg :");
    scanf("%f", &Car_Fuel_Avg_KM_Per_Liter);

    if (Car_Fuel_Avg_KM_Per_Liter <= 0)
    {
        printf("\nInvalid Input!");
    }
    else
    {
        Fuel_Cost_1st_Trip = (Single_Trip_Distance_KM / Car_Fuel_Avg_KM_Per_Liter) * First_Fuel_Price_Liter;
        Fuel_Cost_2nd_Trip = (Single_Trip_Distance_KM / Car_Fuel_Avg_KM_Per_Liter) * Second_Fuel_Price_Liter;
        Total_Fuel_Consumed = (Single_Trip_Distance_KM * 2) / Car_Fuel_Avg_KM_Per_Liter;

        printf("\nYour First Trip cost is about : %.2f\n\nYour Second Trip cost is about : %.2f\n\nTotal Fuel Consumed is : %.2f",
               Fuel_Cost_1st_Trip, Fuel_Cost_2nd_Trip, Total_Fuel_Consumed);
    }
    return 0;
};