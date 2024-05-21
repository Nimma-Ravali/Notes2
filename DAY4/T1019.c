#include<stdio.h>
#include<conio.h>
int main(){
float C,F;
printf("enter temperature in fahrenheit:");
scanf("%f",&F);
printf("%f fahrenheit is :",F);
C=(F-32)*(5.0/9.0);
printf("%f celsius:",C);
return 0;
}
