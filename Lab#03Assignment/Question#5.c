#include <stdio.h>

int main () {

    float Principle, Rate_Of_Interest, Time_Period, Interest;


    printf("\nEnter Principle in between (100 - 1,000,000) Rs :");
    scanf("%f", &Principle);
    printf("\nEnter Rate of Interest in between (5 - 10) Percent :");
    scanf("%f", &Rate_Of_Interest);
    printf("\nEnter Principle in between (1 - 10) Years :");
    scanf("%f", &Time_Period);

    if (Principle < 100 || Principle > 1000000 || Rate_Of_Interest < 5 || Rate_Of_Interest > 10 || Time_Period < 1 || Time_Period > 10){
        printf("Error!, \nPlease Check the initial and final limit");
    }
    else {
        Interest = Principle * Rate_Of_Interest * Time_Period;
        printf("\nYour Interest becomes : %2.f", Interest);
    }


    return 0;
};