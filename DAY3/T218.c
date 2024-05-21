#include<stdio.h>
#include<conio.h>
int main(){
	int a,n;
	printf("Enter the 3 digit value of a:");
	scanf("%d",&a);
	printf("reverse of given numbers:%d",a%10);
	n=a/10;
	printf("%d%d",n%10,n/10);
	return 0;
}
