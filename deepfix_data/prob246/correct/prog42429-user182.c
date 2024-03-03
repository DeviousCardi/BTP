#include <stdio.h>
int main() {
int a,b,c,s,m;
float g;
scanf("%d%d%d",&a,&b,&c);
s=a+b+c;
m=a*b*c;
g=(a+b+c)/2;
printf("Sum=%d\n",s);
printf("Multiplication=%d\n",m);
printf("Average=%5.3f",g);
	return 0; }