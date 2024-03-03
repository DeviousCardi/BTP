#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	double a,b,area,dx,x;
	scanf("%lf%lf",a,b);
	scanf("%d",n);
	dx=(b-a)/n;
	for(i=0;i<n;i=i+1) {
	 x=a+(i*dx);
	 area=(-(x*x)+(3*x)-(2*x*x*x)-(x*x)-(5*x))*dx;
	  if(area<0)
	  printf("%lf",area*-1);
	  else
	  printf("%lf",area); }
	return 0; }