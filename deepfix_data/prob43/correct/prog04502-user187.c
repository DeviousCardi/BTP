#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,x,sum=0,d[1000],s;
	int n,i;
	scanf("%lf,%lf,%d",&a,&b,&n);
	x=(b-a)/n;
	for(i=0;i<n;i++) {
	        d[i]=a;
	        a=a+x; }
	for(i=0;i<n;i++) {
	        s=(8*d[i])-(2*d[i]*d[i]*d[i]);
	        if(s<0) {
	                s=s*(-1); }
	        sum=sum+(s*x); }
    printf("%lf",x);
	return 0; }