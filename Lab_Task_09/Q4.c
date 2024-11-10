#include<stdio.h>
#include<string.h>
// Write a C program with a user-defined function calculate to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. The program should take two numbers and an operation choice as input, and then use the function to perform the operation.
float add(float a,float b)
{
    return a+b;
}
float subs(float a,float b)
{
    return a-b;
}
float pro(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}
int main(){
    float a,b;
    char choose;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    printf("Enter operation(+-/*): ");
    scanf(" %c",&choose);
    switch (choose)
    {
    case '+':
        printf("%.2f+%.2f=%.2f",a,b,add(a,b));    
        break;
    case '-':
        printf("%.2f-%.2f=%.2f",a,b,subs(a,b));    
        break;
    case '*':
        printf("%.2f*%.2f=%.2f",a,b,pro(a,b));    
        break;
    case '/':
        printf("%.2f/%.2f=%.2f",a,b,div(a,b));    
        break;
    default:
        printf("Invlid Input!");
        break;
    }
    return 0;
}