#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a;
	double b,d;
	double s=0;
	int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	d=(b-a)/n;
	printf("%.2lf",d);
	int p[n+1];
	for(i=0;i<n+1;i++) {
	    p[i]=b+i*d; }
	int h[n+1];
	for(i=0;i<n+1;i++) {
	    h[i]=2*(p[i]*p[i]*p[i])-8*p[i];
	    if(h[i]<0) {
	        h[i]=-h[i]; }
	    else
	    h[i]=h[i]; }
	int c[n];
   for(i=0;i<n;i++) {
       c[i]=h[i]*d;
       s=s+c[i]; }
   printf("%lf",s);
	return 0; }