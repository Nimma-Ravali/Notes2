#include<stdio.h>
int main()
{
	int p,t;
	float r,s;
	printf("enter principal amount:");
	scanf("%d",&p);
	printf("enter rate of interest:");
	scanf("%f",&r);
	printf("enter time(in years):");
	scanf("%d",&t);
	s=(p*t*r)/100.0;
	printf("simple interest:%.2f",s);
	return 0;
}
