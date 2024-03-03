#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
		if(a+b>c && b+c>a && c+a>b) {
	   if(((b*b)+(c*c)==(a*a))||((a*a)+(c*c)==(b*b))||((a*a)+(b*b)==(c*c)))
	   printf("Right Triangle");
	   else
	   printf("Not Right Triangle"); }
	else
	printf("cannot form a Triangle");
	return 0; }