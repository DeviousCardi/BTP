#include <stdio.h>
#include <stdlib.h>
int main() {
	unsigned int a,b,c,a1,b1,c1;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>=b && a>=c) {
	    a1=a;b1=b;c1=c; }
	else if(b>=c && b>=a ) {
	    a1=b;b1=a;c1=c; }
	else {
	    a1=c;b1=b;c1=a; }
	if((a1*a1)==(b1*b1)+(c1*c1))
	printf("Right Triangle");
	else if(a1>=b1+c1)
	printf("Cannot form a Triangle");
	else
	printf("Not Right Triangle");
	return 0; }