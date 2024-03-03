#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b,s,f,g,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	s=0;
	for(i=a;i<b;i=i+(b-a)/n); {
	    f=-(i*i)+3*i;
	    g=2*i*i*i-i*i-5*i;
	    if(f<g)
	      s=s+(g-f)*1.0*(b-a)/n;
	    else s=s+1.0*(f-g)*(b-a)/n; }
	printf("%.4lf",s);
	return 0; }