#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,area=0,i,j;
	int n;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	j=((b-a)/n)
	for(i=a;i<b;i=i+j) {
	     if(i<=(-1)) {
	          area=area+j }
	     else if(i>(-1)&&i<1) {
	          area=area+(i*i*j); }
	     else if(i>=1) {
	          area=area+(i*i*i*j); } }
	printf("%ld.4",area);
	return 0; }