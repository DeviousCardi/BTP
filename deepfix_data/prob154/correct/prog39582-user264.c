#include <stdio.h>
#include <stdlib.h>
double f(double x){
    if(x<=-1)
        return 1;
    if(x>-1&&x<1)
        return x*x;
    else
        return x*x*x; }
int main() {
	double a,b,area=0;
	int n,i;
	double y;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	  y=(b-a)/n;
	 double x[n+1];
	for(i=0;i<=n-1;i++){
	    x[i]=a+y*i; }
	 for(i=0;i<=n-1;i++){
	     area=area+f(x[i])*y; }
	 printf("%0.4lf",area);
	return 0; }