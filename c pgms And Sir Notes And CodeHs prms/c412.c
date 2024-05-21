#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	(a<b&&a<c)&&printf("a is smallest number:%d",a);
	(b<a&&b<c)&&printf("b is smallest number:%d",b);
	(c<a&&c<b)&&printf("c is smallest number:%d",c);
	return 0;
}
