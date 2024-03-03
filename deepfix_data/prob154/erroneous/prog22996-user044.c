#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b;
	int n,i;
	double x;
	double f=1;
	double area=0;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	x=(b-a)/n;
	if( b<=-1) {
	    for(i=0;i<n;i++) {
	        f=1*x;
	        area=area+f; } }
	if(a>=-1 && b=<1) {
          for(i=0;i<n;i++) {
	        f=((a+i*x)*(a+i*x))*x;
	        area=area+f; } }
    if(b>=1) {
        for(i=0;i<n;i++) {
	        f=((a+i*x)*(a+i*x)*(a+i*x))*x;
	        area=area+f; } }
    printf("%lf",area);
	return 0; }