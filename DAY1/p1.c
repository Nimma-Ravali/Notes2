#include<stdio.h>
int main(){
	int a=1,b=2,c;
	printf("before swapping a=%d b=%d \n",a,b);
	b=b-a;
	a=a+b;
	c=a-b;
	printf("after swapping a=%db=%d",a,b); 
	return 0;
}
	

