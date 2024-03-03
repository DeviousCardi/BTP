#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,i;
	float a,b,t, x1,x2,sum=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	x1=x1+(-i*i+3);
	x2=x2+(2*i*i*i-i*i-5*i);
	t=(b-a)/n;
	sum=sum+(x1-x2)*t;
	printf("%.4f",sum); }
	return 0; }