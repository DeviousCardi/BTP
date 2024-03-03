#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,a1,a2,a3;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(c+a>b)) {
	    if((a>b)&&(a>c))
	    {a1=a;a2=b;a3=c;}
	    else if((b>a)&&(b>c));
	    {a1=b;a2=a;a3=c;}
	    else
	    {a1=c;a2=a;a3=b;}
	if(a2*a2+a3*a3==a1*a1)
	printf("Right Triangle");
	else
	printf("Not Right Triangle"); }
	else
	printf("Cannot form a Triangle");
	return 0; }