#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	double a,b,s,f,g;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	s=0;
	for(i=a;i<b;i=i+(b-a)/n); {
	    f=-i*i*i+3*i;
	    g=2*i*i*i-i*i-5*i;
	    if(f<g)
	      s=s+(g-f)*(b-a)/n;
	    else s=s+(f-g)*(b-a)/n; }
	printf("%.4lf",s);
	return 0; }