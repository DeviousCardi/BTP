#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
	int n,i,j,x;
	double a,b, area,dx;
	scanf("%d\n",&n);
	scanf("%lf%lf\n",&a,&b);
	double dx(double b,double a,int n){
	    if(b>=a&&n>=0)
	    printf("%lf\n",((b-a)/n));
	    return ((b-a)/n); }
	f(x)=-x^2+3x ;
	g(x)=2x^3-x^2-5x ;
	    for(i=0;i<=n-1;i++){
	        area=area+|f(x)-g(x)|*dx; }
	return 0; }