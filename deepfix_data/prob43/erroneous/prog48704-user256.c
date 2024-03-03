#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,area=0.0,xs,x[100000],t=0.0;
	int n,f[100000],g[100000],i,j,dif;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	xs=((b-a)*1.0)/n;
	x[0]=a;
	for(i=1;i<n;i++) {
	    x[i]=a+xs; }
	for(i=0;i<n;i++) {
	    t=int(x[i]);
	    f[t]=-t*t+3*t;
	    g[t]=2*t*t*t-t*t-5*t;
	    dif=f[t]-g[t];
	    if(dif>=0) {
	        dif=dif; }
	    else {
	        dif=-dif; }
	    area=area+dif*xs*1.0; }
	printf("%lf",area);
	return 0; }