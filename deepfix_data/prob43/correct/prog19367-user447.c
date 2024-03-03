#include <stdio.h>
#include <stdlib.h>
int main() {
	int f,g,n,i;
	double a,b,s=0;
	scanf("%lf%lf%d",&a,&b,&n);
	for(i=a;i<=b;i=i+(b-a)/n); {
	    f=-i*i*i+3*i;
	    g=2*i*i*i-i*i-5*i;
	    if(f<g)
	      s=s+(g-f)*(b-a)/n;
	    else s=s+(f-g)*(b-a)/n; }
	printf(".4%lf",s);
	return 0; }