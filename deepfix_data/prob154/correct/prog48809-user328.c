#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,sum=0,d,x,i,j,k;
	int n;
	scanf("%lf",&a);
	scanf("&lf",&b);
	scanf("%d",&n);
	scanf("%lf",&x);
	d=(b-a)/n;
	if(a<=-1 &&b<=-1) {
	    	    for(i=1;i<=n;i++) {
	        sum=sum+(1*d); } }
	else if(a>=1 && b>=1) {
	    	    for(j=1;j<=n;j++) {
	        sum=sum+(x*x*x*d); } }
	else {
	   	    for(k=1;k<=2;k++) {
	        sum=sum+(x*x*d); } }
	printf("%.4lf",sum);
	return 0; }