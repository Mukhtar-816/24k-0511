#include <stdio.h>
int main()
{
    int arr[3][3], arr2[3][3],result[3][3],i,j;
    printf("enter the elements of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("element %d:", j + 1);
            scanf("%d", &arr[i][j]);
        }

        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j < 3; j++)
        {
            printf("metrix 2 element %d:", j+ 1);
            scanf("%d", &arr2[i][j]);
        }
        printf("\n");
    }
    for (int i= 0; i< 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            printf(" %d ", arr2[i][j]);
        }
        printf("\n");
    }
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j]=0;
        }
        
        
    }
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           for (int k=0;k<3;k++){
               result[i][j] += arr[i][k]*arr2[k][j];
               
           }
       }
   }
printf("\n the result is:\n");
for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        printf("%d  ",result[i][j]);
        
    }
    printf("\n");
    
}
  
    
    
    
    return 0;
}