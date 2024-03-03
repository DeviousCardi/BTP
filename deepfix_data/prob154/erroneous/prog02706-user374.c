#include <stdio.h>
#include <stdlib.h>
double f(double);
int main() {
	int i,n;
	double a,b,cons,f,x,sum=0;
	double k;
	scanf("%lf%lf%d",&a,&b,&n);
	cons=(b-a)/n;
	for(i=0;i<=n-1;i+=)
	{   x=a+(i*cons);
	    sum=sum+f(x); }
double f(double x){
	if(x<=-1)
	f=1;
	if(x>-1 && x<1)
	f=x*x;
	if(x>=1)
	f=x*x*x;
	return f; }