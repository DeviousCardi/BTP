#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	double a,b;
	double sum,x;
	scanf("%lf%lf",&a&b);
	scanf("%d",&n);
	for(i=a;i<=b;i=i+(b-a)/n) {
	    if(i<1) {
	        x=1; }
	    else if(i>-1&&i<1) {
	        x=i*i*i; }
	    else if(i>1) {
	        x=i*i*i; }
	    sum=sum+x*(b-a)/n }
	print("%lf",sum);
	return 0; }