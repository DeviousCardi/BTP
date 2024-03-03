#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,x,a,b;
	float area,t1,t2,t3,d;
	scanf("%d%d%d%d",&n,&a,&b,&x);
	d=(b-a)/n;
	if(x<=-1)
	t1=1;
	if(x>-1||x<1)
	t2=(x*x);
	if(x>=1)
	t3=(x*x*x);
	area=(d*t1)+(d*t2)+(d*t3);
	printf("%.4f",area);
	return 0; }