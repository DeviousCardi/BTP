#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,e,f,z,t,b,k,sum=0.0,x[1000];
	int n,i,j;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	k=(b-a)/n;
	for(i=0;i<=n;i++){
	    x[i]=a+(i*k); }
	for(j=0;j<n;j++){
	   w=x[j];
	   e=(8*w);
	   f=(2*(w*w*w);
	   t=e-f;
	   z=((abs(t))*k);
	   printf("%lf\n",z/k);
	    sum=sum+z; }
	printf("%.4lf",sum);
	return 0; }