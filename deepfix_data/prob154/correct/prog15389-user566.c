#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main() {
	double s,a,b,h,t;int i,n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	t=(b-a)/n;
	for(i=0;i<n;i++) {
	   if(a+i*t<=-1) h=t*1;
	   if(a+i*t>-1 && a+i*t<1) h=t*(a+i*t)*(a+i*t);
	   if(a+i*t>=1) h=t*(a+i*t)*(a+i*t)*(a+i*t);
	   s=s+h; }
	printf("%lf",s);
	return 0; }