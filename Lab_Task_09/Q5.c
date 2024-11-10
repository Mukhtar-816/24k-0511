#include<stdio.h>
#include<string.h>
char* rev(char arr[]);
char* rev(char arr[])
{
    for (int i = 0; i < strlen(arr)/2; i++)
    {
        char temp=arr[i];
        arr[i]=arr[strlen(arr)-i-1];
        arr[strlen(arr)-i-1]=temp;
        
    }
    // printf("%s",arr);
     return arr;
} 
int main(){
    char arr[6]="ABCDE";
    printf("%s",rev(arr));
   return 0;
}