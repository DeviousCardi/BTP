#include <stdio.h>
#include <stdlib.h>
int main() {
	const double E==0.000001;
	double a,b;
	int n,i=0;
	scanf("%lf %lf %d",&a &b &n);
	float length =(b-a)/n,sum=0.0;
	while(b+2<E,i<n)
	sum=sum + (8*i)-2*i*i*i;
	while(b>-2-E&&b<E,i<n)
	sum=sum + (2*i*i*i) -8*i;
	while(b+E>0&&b<2+E,i<n)
	sum = sum + (8*i)-2*i*i*i;
	while(b+E>2,i<n)
	sum = sum + (2*i*i*i)-8*i
	sum=sum*length;
	printf("%f",sum);
	return 0; }