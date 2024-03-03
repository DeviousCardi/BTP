#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,area=0.0,xs,x[100000],t;
	int n,f[100000],g[100000],i,j,dif;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	xs=((b-a)*1.0)/n;
	x[0]=a;
	for(i=1;i<n;i++) {
	    x[i]=x[i-1]+xs; }
for(i=0;i<n;i++) {
    printf("lf",x[i]); }
	return 0; }