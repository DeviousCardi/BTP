#include <stdio.h>
#include <stdlib.h>
int main() {
	double area,a,b,sum=0;
	int i,n;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	 for (i=0;i<=n-1;i=i+1){
	     if (a<=-1&&b<=-1) {
	         area=((b-a)/n)*(1);
	         sum=sum+area; } }
	printf ("%.4lf",sum);
	for (i=0;i<=n-1;i=i+1){
	    if(a>=1 && b>=1){
	      area=((b-a)/n)*(a+i*((b-a)/n));
	      sum=sum+area; } }
	return 0; }