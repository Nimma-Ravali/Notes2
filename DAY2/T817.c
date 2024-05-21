#include<stdio.h>
#include<conio.h>
int main(){
int a=1,b;
b=a++ + a++ + a++;
printf("a=%d,b=%d",a,b);
a=1;
b= ++a + ++a + ++a;
printf("a=%d,b=%d",a,b);
return 0;
}
