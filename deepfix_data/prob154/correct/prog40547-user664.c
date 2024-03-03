#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,i,sum=0;
	int n=0;
	scanf("%lf%lf%d",&a,&b,&n);
	for(i=a;i<=b;i=i+(b-a)/n) {
	    if((i+(b-a)/n)<=(-1)) {
	        sum=sum+(b-a)/n; }
	    else
	    if((i+(b-a)/n)>(-1)&&(i+(b-a)/n)<1) {
	        sum=sum+(i*i); }
	    else
	    if((i+(b-a)/n)>=1) {
	        sum=sum+(i*i*i); } }
	printf("%.4lf",sum);
	return 0; }