#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	int n,i;
	double a,b;
	double f[1000],g[1000];
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    x=a+i*(b-a)/n;
	    f[i]=-x*x+3*x;
	    g[i]=2*x*x*x-x*x-5*x; }
	return 0; }