#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i,n;
	float a,b;
	float sum,x;
	sum=0;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%d",&n);
	for(i=a;i<=b;i=i+(b-a)/n) {
	    if(i<=-1) {
	        x=1; }
	    else if((i>-1)&&(i<1)) {
	        x=i*i; }
	    else if(i>=1) {
	        x=i*i*i; }
	    sum=sum+x; }
	printf("%f",sum);
	return 0; }