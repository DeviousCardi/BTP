#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n;
	float a,b,s1,s2,x,area,dx;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%d",&n);
	dx=(b-a)/n;
	for(x=a;x<=b;x++){
	    if(a<=0&&b<=0){
	    s1=s1+(2*x*x*x-8*x)*dx; }
	if(a>=0&&b>=0){
	    s2=s2+(8*x-2*x*x*x)*dx;} }
	    area=s1+s2;
	    printf("%.4f",&area);
	return 0; }