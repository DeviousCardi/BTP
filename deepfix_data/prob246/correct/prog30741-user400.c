#include <stdio.h>
int main() {
	int a,b,c,x,y;
	float z;
	printf("enter the numbers");
	scanf("%d%d%d",&a,&b,&c);
	x=a+b+c;
	y=a*b*c;
	z=x/3;
	printf("%d%d%f",x,y,z);
	return 0; }