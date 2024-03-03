#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	double a,b,dx,sum=0;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	  dx=(b-a)/n;
	double x[n];
	x[0]=a;
	for(i=1;i<n;i++){
	x[i]=x[i-1]+dx;}
	for(i=0;i<n;i++){
	double f;
    if(x[i]<1){
        if(x[i]<=(-1))
        f=1;
        else f=(x[i]*x[i]); }
    else f=(x[i]*x[i]*x[i]);
	sum=sum+f*dx;}
	printf("%0.4lf",sum);
	return 0; }