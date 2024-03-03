#include <stdio.h>
#include <stdlib.h>
int main() {double a,b,ar,dx;int n,i;int x[n];ar=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	dx=(b-a)/n;
	for(i=0;i<n;i++)
	{ x[i]=(a+(i*dx)); }
	for(i=0;i<n;i++) {
	    if(x[i]<=-1)
	    ar= ar+x[i]*dx;
	    if(x[i]>-1&&x[i]<1)
	    ar=ar+x[i]*dx;
	    if(x[i]>=1)
	    ar=ar+x[i]*dx; }
	printf("%0.4lf",ar);
		return 0; }