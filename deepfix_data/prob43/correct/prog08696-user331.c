#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b,k,w,sum=0.0,x[1000];
	int n,i,j;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	k=(b-a)/n;
	for(i=0;i<=n;i++){
	    x[i]=a+(i*k); }
	for(j=0;j<n;j++){
	    w=x[j];
	    printf("%lf\n",w);
	    sum=sum+((abs((8*w)-(2*(w*w*w))))*k); }
	printf("%.4lf",sum);
	return 0; }