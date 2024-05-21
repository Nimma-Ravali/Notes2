#include<stdio.h>
#include<conio.h>
int main(){
int s,h,m,sec;
printf("enter the seconds:");
scanf("%d",&sec);
h=sec/3600;
m=(sec-h*3600)/60;
s=(sec-h*3600)-m*60;
printf("%d:%d:%d",h,m,s);
return 0;
}
