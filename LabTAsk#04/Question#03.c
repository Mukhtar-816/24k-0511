#include<stdio.h>
int main(){

    char Character;

    printf("Enter the Character: ");
    scanf("%c", &Character);

    if (Character >= 65 && Character <= 90){
        printf("This is an uppercase!");
    }
    else if (Character >= 97 && Character <=122){
        printf("This is an lowercase!");
    }
    else if (Character >= 49 && Character <= 57){
        printf("This is a number!");
    }
    else {
        printf("This is a special key!");
    }


    return 0;
}