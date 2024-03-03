#include <stdio.h>
#include <stdlib.h>
int main() {
	double  a,b,n;
	double i,c;
	scanf("%lf,%lf,%lf",&a,&b,&n);
	double sum=0,area,v1,v2;
	double product;
	double k=(b-a)/n;
	double m(double x){
	    v1=(-x*x+3*x)-(2*x*x*x-x*x-5*x);
	  return v1; }
	double abs(double y){
	    if (y>0){v2=y;}
	    if (y<0){v2=-y;}
	    if (y==0){v2=0;}
	    return v2; }
	for(i=0;i<=n-1;i++){
	    c=a+k*i;
	    product=abs(m(c))*k;
	    sum=sum+product;
	   printf("%0.4lf",sum); }
	return 0; }