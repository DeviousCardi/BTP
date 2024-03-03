#include <stdio.h>
#include <stdlib.h>
double f(double a){
    if(a<=-1)
    return 1;
    else if(a>=-1&&a<=1)
    return a*a;
    else if(a>=1)
    return a*a*a; }
int main() {
	int n,k;
	double a,b,A=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	for(k=0;k<n;k++){
	    A=((f(a+k*(b-a)/n))/n )+A; }
	printf("%f",A);
	return 0; }