#include <stdio.h>
#include <stdlib.h>
int main() {
	double func(double x) {
	    double ftn;
	    if (x>= 0)
	   { ftn= -3*x*x*x + 3*x + x*x + 5*x}
	    else
	    {ftn= -(-3*x*x*x + 3*x + x*x + 5*x)}
	    return ftn; }
	int n;
	double a,b,c,sum;
	scanf("%ld%ld",&a,&b);
	scanf("%d",&n);
	b>a;
	c= (b-a)/n;
	sum=0;
	for (i=a; i<=b;i++) {
	    t= a+ c*i;
	    sum = sum + func(t)*c; }
    printf ( "%ld",sum);
	return 0; }