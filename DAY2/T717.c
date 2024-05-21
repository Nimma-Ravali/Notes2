#include<stdio.h>
#include<conio.h>
main(){
int a;
printf("enter the a value:");
scanf("%d" ,&a);
printf("%d",((a/10)+((a%10)/5))*10);
return 0;
}
