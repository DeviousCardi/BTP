#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a&b&c);
	if(a+b<=c||b+c<=a||a+c<=b)
	  printf("Cannot form a triangle");
	else if((a*a+b*b<c*c)&&(b*b+c*c<a*a)&&(a*a+c*c<b*b))
	  printf("Acute Triangle");
	else if(a*a+b*b>c*c)||(b*b+c*c>a*a)||(a*a+c*c>b*b))
	  printf("Not acute triangle")
	return 0; }