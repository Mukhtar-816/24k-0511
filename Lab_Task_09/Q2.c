#include<stdio.h>
// Create a C program that swaps the values of two integers using a user-defined function, swapIntegers. The user inputs two integer values, and the program uses the function to swap them. It should perform the swap and display the updated values.
void swap(int a,int b)
{
    printf("before swaping a:%d b:%d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("after swaping a:%d b:%d",a,b);
}
int main(){
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    swap(n1,n2);
   return 0;
}