#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,t1,t2;
	scanf("%d %d %d",&a,&b,&c);
	if (a>b) {
	    t1=a;
	    t2=b; }
	else {
	    t1=b;
	    t2=a; }
	if (c>t1)
	{printf("%d",t1);}
	else if (c<t1)
	{if (c>t2)
	{printf("%d",c);}
	else
	{printf("%d",t2);} }
	return 0; }