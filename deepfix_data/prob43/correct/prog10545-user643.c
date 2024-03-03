#include <stdio.h>
#include <stdlib.h>
int main() {
	double  a,b,n;
	double i,c;
	scanf("%lf",&n);
	double sum=0,area,v1,v2;
	double x,y,product;
	double k=(b-a)/n;
	double m(double x){
	  v1=(-x*x+3*x)-(2*x*x*x-x*x-5*x); }
	double abs(double y){
	    if (y>0){v2=y;}
	    if (y<0){v2=-y;}
	    if (y=0){v2=0;} }
	for(i=0;i<=n-1;i++){
	    c=a+k*i;
	    product=abs(v1)*k;
	    sum=sum+product;
	    area=sum;
	   printf("%lf",area); }
	return 0; }