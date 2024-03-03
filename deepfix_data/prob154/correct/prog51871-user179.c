#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,sum=0,x[20],y,p;
	int i,n;
	scanf("%lf%lf%d",&a,&b,&n);
	p=(b-a)/n;
	for(i=1;i<n;i++){
	    x[i]=a+i*((b-a)/n); }
	for(i=1;i<n;i++){{
	    if(x[i]<=-1) y=1;
	    else if(x[i]<1) y=x[i]*x[i];
	    else y=x[i]*x[i]*x[i]; }
	    sum=sum+y*p;
	} printf("%.4lf",sum);
	return 0; }