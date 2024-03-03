#include <stdio.h>
#include <stdlib.h>a
double f(double x){
    if(x<=-1){
        return 1; }
    else if(x>=1){
        return x*x*x; }
    else{
        return x*X; } }
int main() {
	double a,b,x,y,sum=0;
	int n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	x=a;
	y=(b-a)/n;
	for(i=0;i<=n-1;i++){
	    sum = sum + f(x)*y;
	    x=x+y; }
	printf("%lf",sum);
	return 0; }