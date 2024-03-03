#include <stdio.h>
#include <stdlib.h>
int main() {
	double area,a,b,sum=0;
	int i,n;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	 for (i=0;i<=b;i=i+((b-a)/n)){
	     if (a<=-1&&b<=-1) {
	         area=((b-a)/n)*(a+i);}
	         sum=sum+area; }
	printf ("%.4lf",sum);
	return 0; }