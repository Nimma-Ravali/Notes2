#include<stdio.h>
main(){
int a;
printf("enter the a value:");
scanf("%d" ,&a);
if(a%10<5){
printf("%d",a+(10-a%10));
}
else{
	printf("%d",a+(-10+a/10));
}

}
