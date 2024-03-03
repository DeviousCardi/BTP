#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b,k,sum=0;
	int n,i,j,m,x[1000];
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	k=(b-a)/n;
	for(i=0;i<=n;i++){
	    x[i]=a+(i*k); }
	for(j=0;j<n;j++){
	    m=x[j];
	    sum=sum+((abs((8*m)-(2*(m^3))))*k); }
	printf("%lf",sum);
	return 0; }