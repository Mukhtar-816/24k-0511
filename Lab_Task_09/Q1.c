#include<stdio.h>
#include<string.h>
// Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20 characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not Palindrome” for each word. A palindrome is a word that reads the same forward and backward. For example: "madam", "racecar", "level", "radar".
int main(){
    char arr[5][20]={"ooooooooo", "racecar", "leveal", "radar","ete"};

    for (int i = 0; i < 5; i++)
    {
        int pali=1;
        for (int j = 0; j < strlen(arr[i])/2; j++)
        {
            if(arr[i][j]!=arr[i][strlen(arr[i])-j-1])
            {
                pali=0;
                break;
            }
        }
        if(pali)
        {
            printf("%s is Palindrome\n",arr[i]);
        }
        else{
            printf("%s is Not palindrome\n",arr[i]);
        }
    }
    
   return 0;
}