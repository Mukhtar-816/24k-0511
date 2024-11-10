#include<stdio.h>
#include<string.h>
#include<math.h>
// Implement a function that checks if a given integer is a prime number. Use this function in the main program to check if numbers entered by the user are prime.
int prime(int n)
{
    if(n==0 || n==1)
    {
        return 0;
    }
    if(n==2 || n==3)
    {
        return 1;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(prime(n)==1)
    {
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
   return 0;
}