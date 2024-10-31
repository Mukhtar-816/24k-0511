#include<stdio.h>
int main()
{
int n;
printf("enter the number from which you want to draw the pattern");
scanf("%d",&n);
if(n%2==0){
    printf("please enter odd numnber");
    return 1;
}

for(int i=n;i>0;i-=2){
for(int j=i;j>0;j-=2){
    printf("%d,",j);
}
printf("\n");
}
return 0;

}
