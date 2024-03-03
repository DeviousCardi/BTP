#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double g(double x) {
    return 2*x*x*x-x*x-5*x; }
double f(double x) {
    return -1*x*x+3*x; }
int main() {
	double a,b,w,area=0;
	int i,n;
	scanf("%lf %lf %d",&a,&b,&n);
	w=(b-a)/n;
	for(i=0;i<n;i++)
	 area+=abs(g(a+i*w)-f(a+i*w))*x;
	printf("%.4lf",area);
	return 0; }