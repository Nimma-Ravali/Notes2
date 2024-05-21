#include<stdio.h>
#include<math.h>
int main()
{
	float base,exp,a;
	printf("enter base:");
	scanf("%f",&base);
	printf("enter exponent:");
	scanf("%f",&exp);
	a=pow(base,exp);
	printf("%.2f^%.2f:%.2f",base,exp,a);
}
