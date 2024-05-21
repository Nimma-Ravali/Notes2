#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	scanf("%d",&a);
	int b=a++ + ++a + --a;
	printf("value of b is:%d",b);
	return 0;
}
