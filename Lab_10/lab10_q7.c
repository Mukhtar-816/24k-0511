#include<stdio.h>
#define meter_to_km 0.001
double distance_converter(double meters){
    static int count=0;
    count+=1;
     printf("function has benn called for %d times\n",count);
  
    return meters*meter_to_km;
}
int main(){
int n,count;
double meters,kms;
printf("how many times you want to change distance\n ");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("enter distnce %d:",i+1);
scanf("%lf",&meters);
kms =distance_converter(meters);
printf("ditance in km is %lf\n",kms );


}

return 0;
}