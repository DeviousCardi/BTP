#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,l,count;
	int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	l=(b-a)/n;
	for(i=a;i<n;i=i+l)
	{count=count+(((((-1)*i*i)+3*i)-((2*i*i*i)-(i*i)-(5*i)))*l); }
	printf("%lf",count);
	return 0; }