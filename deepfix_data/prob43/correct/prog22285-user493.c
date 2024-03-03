#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,x,A,B;
	int n;
	const double epsilon=0.000001;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	A=-a*a+3*a;
	B=2*b*b*b-b*b-5*b;
	x=(b-a)/n;
	printf("%lf\n%lf",A,B);
	return 0; }