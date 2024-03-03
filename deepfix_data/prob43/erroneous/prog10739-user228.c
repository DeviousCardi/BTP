#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b;
	int n;
	scanf("%lf""%lf""%d",&a,&b,&n);
	double k=(b-a)/n;
	int i=0;
	double sum=0.0;
	double x;
	while(i<=n-1){
	    x=a+i*k;
	    sum=sum+(abs(8*x-2*pow(x,3)));
	    printf("%lf",sum);
	    if(x==b)
	    break;
	    i=i+1 }
	printf("%lf",sum*k);
	return 0; }