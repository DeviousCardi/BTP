#include <stdio.h>
#include <stdlib.h>
  double mod(double x,double y){
	    if(x>y)
	    return x-y;
	    else
	    return y-x; }
	double f(int x){
	    double m;
	    m=-(x*x)+3*x;
	    return m; }
	double g(int x){
	    double n;
	    n=2*(x*x*x)-(x*x)-(5*x);
	    return n; }
int main() {
    double a,b,h,sum;
    int i;
    sum=0;
    int n;
    scanf("%lf,%lf,%d",&a,&b,&n);
    h=(b-a)/n;
    for(i=0;i<n;i++){
        sum=sum+mod(f(i),g(i))*h; }
    printf("%.4lf",sum);
	return 0; }