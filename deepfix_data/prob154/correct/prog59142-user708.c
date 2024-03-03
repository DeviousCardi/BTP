#include <stdio.h>
#include <stdlib.h>
double f(double x) {
    if(x<=-1)
        return 1;
    else if(x>-1 && x<1)
        return (x*x);
    else
        return (x*x*x); }
int main() {
    double a, b, area=0, temp;
    int n, i;
	scanf("%lf%lf%d",&a,&b,&n);
	temp=(b-a)/n;
	for(i=0;i<n;i++) {
	    area=area+temp*f(a+i*temp); }
	printf("%lf",area);
	return 0; }