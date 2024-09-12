#include <stdio.h>
int main()
{
    char operator;
    int Num1, Num2;
    float res;

    printf("Enter the operation you want to perform (+,-,/,*): ");
    scanf("%c", &operator);

    printf("Enter Num1 :");
    scanf("%d", &Num1);

    printf("Enter Num2 :");
    scanf("%d", &Num2);

    switch (operator)
    {
    case '+':
        res = Num1 + Num2;
        printf("The answer is %.2f", res);
        break;
    case '-':
        res = Num1 - Num2;
        printf("The answer is %.2f", res);
        break;
    case '*':
        res = Num1 * Num2;
        printf("The answer is %.2f", res);
        break;
    case '/':
        res = Num1 / Num2;
        printf("The answer is %.2f", res);
        break;

    default:
        printf("Invalid Operator");
        break;
    }

    return 0;
}