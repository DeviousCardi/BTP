#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,t;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(b>=a)
	{if(b>=c) {
	    if(a>=c)
	{t=a;
	a=b;
	b=t;}
	else
	{t=a;
	a=b;
	b=c;
	c=t; }
	else
	{t=a;
	a=c;
	c=t;} }
	if(c>=a)
	{t=c;
	 c=b;
	b=a;
	a=t;} }
	if(a+b>c && b+c>a && c+a>b) {
	   if((b*b)+(c*c)==(a*a))
	   printf("Right Triangle");
	   else
	   printf("Not Right Triangle"); }
	else
	printf("cannot form a Triangle");
	return 0; }