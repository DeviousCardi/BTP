#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b;
	int n,i;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	double delx;
	delx=(b-a)/n;
	double fcn,k,sum,value;
	sum=0.00;
	for(i=0;i<=(n-1);i++) {
	    k=a+((b-a)*i)/(n);
	    if(k<=-1)
	  fcn=1;
	else if((k>-1)&&(k<1))
	  fcn=k*k;
	else if(k>=1)
	  fcn=k*k*k;
	    value=fcn*delx;
	    sum=sum+value; }
	printf("%.4lf",sum);
	return 0; }