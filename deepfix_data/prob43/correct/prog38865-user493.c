#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,x,A,B,f,g;
	int n,i;
	const double epsilon=0.000001;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	A=-a*a+3*a;
	B=2*b*b*b-b*b-5*b;
	x=(b-a)/n;
	double area=0.0;
	for(i=0;i<=n;i++){
	    f=A+x;
	    g=B+x;
	    area=area+(f-g)*x; }
	printf("%lf",area);
	return 0; }