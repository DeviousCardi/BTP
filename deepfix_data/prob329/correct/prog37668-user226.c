#include <stdio.h>
#include <stdlib.h>
int main() {
	int a=0,b=0,c=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b<=c||b+c<=a||c+a<=b)
	printf("Cannot form a Triangle");
	else if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))
	printf("Right Triangle");
	else
	printf("Not Right Triangle");
	return 0; }