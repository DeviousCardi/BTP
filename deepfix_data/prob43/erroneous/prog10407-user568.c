#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b;
	int n,i;
	scanf("%lf %lf %d",&a,&b,&n);
	double x[n],f(x[n]),g(x[n]),delx,y;
	y=0;
	delx=(b-a)/n;
	for(i=0;i<n;i++){
	    x[i]=a+((i)*(b-a)/n); }
	for(i=0;i<n;i++){
	    f(x[i])=(-pow(x[i],2))+3*(x[i]);
	    g(x[i])=2*(pow(x[i],3))-(pow(x[i],2))-5*(x[i]);
	    y=y+abs(f(x[i])-g(x[i]))*(delx); }
	printf("%.4lf",y);
	return 0; }