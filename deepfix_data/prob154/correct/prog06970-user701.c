#include <stdio.h>
#include <stdlib.h>
double func(double x) {
    if(x<= -1)
    return 1;
    else if (x<1)
    return x*x;
    else
    return x*x*x; }
int main() {
	int n,i;
	double a,b,inter,val,sum=0;
	scanf("%lf%lf%d",&a,&b,&n);
	inter=(b-a)/n;
	for(i=0;i<n;++i) {
	    val=func(a+i*inter);
	    sum+=val; }
	printf("%0.4lf",sum);
	return 0; }