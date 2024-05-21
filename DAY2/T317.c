#include<stdio.h>
#include<conio.h>
int main()
{
	int x=3;
	int y=2;
	int z=x++*(x+y)-y--;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	return 0;
}
