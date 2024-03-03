#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,width,a1=0,a2=0,a3=0;
	double i;
	int n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	width=(b-a)*(1.0/n);
	for(i=a;i<b;i=i+width) {
	    if(i<=-1) {
	        a1=a1+width;
	    }}
	    printf("%lf",a1);
	return 0; }