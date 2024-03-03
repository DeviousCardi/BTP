#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b,area=0,dx,x,j,i;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	dx=(float)((b-a))/n;
	for(i=0;i<n;i=i+1) {
	 x=a+(i*dx);
	 j=-(x*x)+(3*x)-(2*x*x*x)-(x*x)-(5*x);
	     if(j<0)
	     j=j*(-1);
	     else
	     j=j;
	     area=area+(j*dx); }
	printf("%.4lf",area);
	return 0; }