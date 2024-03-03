#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n;
	float a,b,m,i;
	float sum,x;
	sum=0;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%d",&n);
	m=(b-a)/n;
	for(i=a;i<b;i=i+m) {
	    if(i<-1-m) {
	        x=1; }
	    else if((i>-1)&&(i<1)) {
	        x=i*i; }
	    else {
	        x=i*i*i; }
	    sum=sum+x*m; }
	printf("%.4f",sum);
	return 0; }