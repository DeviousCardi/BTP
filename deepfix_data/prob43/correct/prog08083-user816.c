#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	double a,b,area=0,dx,x,j;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	dx=(float)(b-a)/n;
	for(i=0;i<n;i=i+1) {
	 x=a+(float)(i*dx);
	 j=-(x*x)+(3*x)-(2*x*x*x)-(x*x)-(5*x);
	     if(j<0)
	     j=j*(-1);
	     area=area+(j*dx); }
	printf("%.4lf",area);
	return 0; }