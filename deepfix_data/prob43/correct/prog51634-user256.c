#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,area=0.0,xs;
	int n,f[100000],g[100000],i,j,dif;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	xs=((b-a)*1.0)/n;
	for(i=0;i<n;i++) {
	    f[i]=-i*i+3*i;
	    g[i]=2*i*i*i-i*i-5*i;
	    dif=f[i]-g[i];{
	        if(dif>=0){
	            dif=dif; }
	        else {
	            dif=-dif ; } }
	area=area+dif*xs; }
	printf("%.4lf",area);
	return 0; }