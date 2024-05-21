#include<stdio.h>
#include<conio.h>
int main()
{
int a,n;
printf("enter the three digit number a:");
scanf("%d",&a);
n=(a/100)+(a%10);
printf("%d",n);
return 0;
}
