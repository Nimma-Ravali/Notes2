#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,i;
	printf("enter the first num1:");
	scanf("%d", &num1);
	printf("enter the second num2:");
	scanf("%d",&num2);
	for(i=0;i<num2;i++){
		num1++;
	}
	printf("sum of two numbers:%d",num1);
	getch();
	return 0;
	}
