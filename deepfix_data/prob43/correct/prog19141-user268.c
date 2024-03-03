#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	double a,b,p;
	int n,i;
	scanf("%lf,%lf,%d",&a,&b,&n);
	double x[n+1];
	x[0]=a;
	for(i=1;i<n+1;i++){
	    x[i]=x[i-1]+((b-a)/n); }
	p=0;
    for(i=0;i<n;i++){
        p=p+fabs(((-x[i]*x[i])+3*x[i])-(2*x[i]*x[i]*x[i]-x[i]*x[i]-5*x[i]))*((b-a)/n); }
    printf("%.4lf",p);
	return 0; }