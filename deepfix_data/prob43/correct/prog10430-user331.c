#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b,k,sum=0,x[1000];
	int n,i,j,m;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	k=(b-a)/n;
	for(i=0;i<=n;i++){
	    x[i]=a+(i*k);
	    printf("%lf\n",x[i]); }
	for(j=0;j<n;j++){
	    m=x[j];
	    sum=sum+((abs((8*m)-(2*(m^3))))*k); }
	printf("%.4lf",sum);
	return 0; }