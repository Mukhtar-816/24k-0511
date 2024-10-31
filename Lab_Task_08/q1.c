#include<stdio.h>
int main(){
int n,prime,start,end;
printf("enter start of range ");
scanf("%d",&start);
printf("enter the end of range");
scanf("%d",&end);
for(int n=start ;n<end;n++){
    prime=1;
    for(int i=2;i*i<=n;i++){
            if(n%i==0){
            prime=0;
            break;
            }
            
        }
        if(prime){
                printf("%d,",n);
            }
        }
    printf("\n");
return 0;
    }




s