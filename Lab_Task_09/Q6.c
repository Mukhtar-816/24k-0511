#include<stdio.h>
// Create a function that returns the maximum and minimum element in an integer array. Use this function in the main program to find the maximum and minimum from an array entered by the user.
int* max_min(int arr[])
{
      static int mami[2];
      int max=arr[0],min=arr[0];
   for (int i = 0; i < 5; i++)
   {
      if(arr[i]>max && max!=i)
      {
         max=arr[i];
      }
      
      if(arr[i]<min && min!=i)
      {
         min=arr[i];
      }
   }
      mami[0]=min;
      mami[1]=max;  
   return mami;
}
int main()
{
   int take_ar[]={1,2,3,4,5};
   int* return_2=max_min(take_ar);
   printf("Max: %d\n",return_2[1]);
   printf("Min: %d\n",return_2[0]);  
   return 0;
}