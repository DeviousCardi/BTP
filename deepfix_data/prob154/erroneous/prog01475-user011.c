#include <stdio.h>
#include <stdlib.h>
const double epsilon=0.000001;
double f_of_x(double x) {
    if(x+1<=epsilon)
    {return 1;}
    else if(x+1>=epsilon&&x-1<=epsilon)
    {return x*x;}
    else
    {return x*x*x;} }
int main() {
	double a,b;
	int n;
	scanf("%lf%lf%d",&a,&b,&n)
	double dx=((b-a)/n);
	double x[n+1];
	x[0]==a;
	for(i=0;i<n-1;i++) {
	    x[i+1]=x[i]+dx; }
	x[n]=b;
	double area=0;
	for(i=0;i<n;i++) {
	    double fx=f_of_x(x[i]);
	    area=area+fx*dx; }
	printf("%lf",area);
	return 0; }