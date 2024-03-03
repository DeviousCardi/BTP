#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b,i;
	int n;
	scanf("%lf%lf%d",&a,&b,&n);
	double dx=(b-a)/n;
	double fx=0.0,gx=0.0;
	double area=0.0;
	if(dx==0.0){
	    printf("%.4lf",area); }
	else{
	for(i=a;i<=b;i+=dx){
	    fx=fx+(-(i*i))+(3*i);
	    gx=gx+(2*i*i*i)-(i*i)-(5*i);
	    area=fabs(fx-gx)*dx; }
	printf("%.4lf",&area); }
	return 0; }