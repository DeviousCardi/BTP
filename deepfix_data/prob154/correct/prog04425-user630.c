#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,area=0.00,i,j;
	int n;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	j=((b-a)/n);
	for(i=a;i<=b-j;i=i+j) {
	     if(i<=(-1)) {
	          area=area+j; }
	     else if(i>(-1)&&i<1) {
	          area=area+(i*i*j); }
	     else if(i>=1) {
	          area=area+(i*i*i*j); } }
	printf("%.4lf",area);
	return 0; }