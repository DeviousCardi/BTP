#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double epsilon=0.000001;
int main() {
	double a,b,sum=0;
	double n;
	int i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&n);
	double x[(int)n+1];
	x[0]=a;x[(int)n]=b;
	for(i=1;i<n;i++){x[i]=a + (i)*(b-a)/n;}
	for(i=0;i<n;i++){
	sum=sum+ abs(2*x[i]*x[i]*x[i]-8*x[i]); }
	printf("%.4lf",sum);
	printf("%lf",x[0]);
	return 0; }