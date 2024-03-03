#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(((a+b)<=c)||((b+c)<=a)||((c+a)<=b)));
	printf("Cannot form a Triangle");
	else
	{int m,p,q;
	m=a;
	p=b;
	q=c;
	if(b>m)
	{m=b;
	 p=a; q=c;}
	if(c>m)
	{m=c; p=a; q=c; }
	if((power(p,2)+power(q,2))<power(m,2))
	printf("Acute Triangle");
	else
	printf("Not Acute Triangle"); }
	return 0; }