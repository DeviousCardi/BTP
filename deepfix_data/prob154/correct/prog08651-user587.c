#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b,area,diff,sum=0,f,x[n];
	scanf("%lf%lf%d",&a,&b,&n);
	diff=(b-a)/n;
	if(a<=-1&&b<=-1&&a<b)
	area=(b-a);
	printf("%.4lf",area);
	return 0; }