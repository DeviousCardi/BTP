#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double epsilon=0.000001;
int main() {
	double a,b,sum=0;
	int n,i;
	scanf("%lf%lf%d",&a,&b,&n);
	double x[n+1];
	x[0]=a;x[n]=b;
	for(i=1;i<n;i++){x[i]=a + (i)*(b-a)/n;}
	for(i=0;i<n;i++){
	sum=sum+ ((b-a)/n)*abs(2*x[i]*x[i]*x[i]-8*x[i]); }
	printf("%.4lf",sum);
	return 0; }