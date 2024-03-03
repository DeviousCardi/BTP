#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	double f(double x){
	    double m;
	    m=-(x*x)+(3*x);
	    return m; }
	double g(double x){
	    double n;
	    n=2*(x*x*x)-(x*x)-(5*x);
	    return n; }
	 double mod(double x,double y){
	    if(x>y)
	    return x-y;
	    else
	    return y-x; }
int main() {
    double a,b,h,sum,k;
    double i;
    sum=0.00;
    int n;
    scanf("%lf,%lf,%d",&a,&b,&n);
    h=(b-a)/n;
    for(i=0;i<n;i++){
        k=sum+mod(f(i),g(i))*h;
        sum=k; }
    printf("%.4lf\n",sum);
	return 0; }