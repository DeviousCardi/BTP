#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b,y,i,j,sum=0.0;
	int n;
	scanf("%lf %lf", &a,&b);
	scanf("%d",&n);
	y=(b-a)/n;
	for(i=a;i<=b;i=i+y) {
	    double f= -(i*i) + 3.0*i;
	    double g= 2.0*(i*i*i) - (i*i) - 5.0*(i);
	    if(f>g)sum=sum + (f-g)*y;
	    else sum=sum + (g-f)*y;
	    j=j+1; }
	printf("%.4lf",sum);
	return 0; }