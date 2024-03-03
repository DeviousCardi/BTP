#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a*a+b*b>c*c)&&(a*a+c*c>b*b)&&(b*b+c*c>a*a)&&(a+b>c)&&(a+c>b)&&(c+b>a))      printf("acute triangle");
    if((a*a+b*b<=c*c)&&(a*a+c*c<=b*b)&&(b*b+c*c<=a*a)&&(a+b>c)&&(a+c>b)&&(c+b>a))   printf("not acute triangle");
	if((a+b<=c)||(a+c<=b)||(c+b<=a))                                                   printf("cannot form a triangle");
	return 0; }