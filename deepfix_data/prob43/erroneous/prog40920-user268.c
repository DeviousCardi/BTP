#include <stdio.h>
#include <stdlib.h>
#include<math.h> }
int main() {
	double a,b,p,dx;
	int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double x[n+1];
	x[0]=a;
	x[n]=b;
	dx=(b-a)/(double)n;
	for(i=1;i<n;i++){
	    x[i]=x[i-1]+dx; }
	p=0;
    for(i=0;i<n;i++){
       p=p+(fabs(8*x[i]-2*pow(x[i],3)))*dx; }
    printf("%.4lf",p);
	return 0; }