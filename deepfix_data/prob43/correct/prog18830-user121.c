#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b,i;
	int n;
	scanf("%lf%lf%d",&a,&b,&n);
	double dx=(b-a)*1.0/n;
	double fx=0.0,gx=0.0;
	double area=0.0;
	if(dx==0.0){
	    printf("%.4lf",area); }
	else{
	for(i=a;i<=b;i+=dx){
	    fx+=(-(i))+(3*i);
	    gx+=(2*i*i*i)-(i*i)-(5*i);
	    area=fabs(fx-gx)*dx; }
	double output=area;
	printf("%.4lf",&output); }
	return 0; }