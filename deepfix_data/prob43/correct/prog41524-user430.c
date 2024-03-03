#include <stdio.h>
#include <stdlib.h>
int f(float a){
    float b;
    b=3.0*a-a*a;
    return b;}
int g(float a){
    float b;
    b=2.0*a*a*a-a*a-5.0*a;
    return b; }
int main() {
	int d,n;
	float a,b,sum=0,x,c,e;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%d",&n);
	d=(b-a)/n;
	for(x=a+d; x<=b; x=x+d){
	c=f(x);
	e=g(x);
	sum=sum+(c-e)*d;}
	printf("%f",sum);
	return 0; }