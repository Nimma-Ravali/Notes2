
#include<stdio.h>
int main() {
int x = 5, y = 0,i=1;
switch(i++) {
if (x > 4)
y++;
else if (x > 2)
y += 2;
else
y += 3;
x--;
}
printf("%d %d %d", x,y,i);
return 0;
}
