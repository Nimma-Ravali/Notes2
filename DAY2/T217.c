#include<stdio.h>
#include<conio.h>
int main(){
	int a=1,b=2,c=3;
	int result=a++ + ++b + c-- - --c + ++a + b-- + a-- - b;
	printf("result:%d",result);
	return 0;
}
