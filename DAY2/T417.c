#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("Enter the n value:");
	scanf("%d",&n);
	printf("%d",n+(100-n%100));
	return 0;
}
