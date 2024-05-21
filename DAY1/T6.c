#include<stdio.h>
#include<conio.h>
int main(){
	int var1,var2,temp;
	printf("Enter the var1 value:");
	scanf("%d",&var1);
	printf("Enter the var2 value:");
	scanf("%d",&var2);
	printf("numbers before swapping:%d %d\n",var1,var2);
	temp=var1;
	var1=var2;
	var2=temp;
	printf("numbers after swapping:%d %d\n",var1,var2);
	return 0;
}
