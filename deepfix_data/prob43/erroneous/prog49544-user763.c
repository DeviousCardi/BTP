#include <stdio.h>
#include <stdlib.h>
double f(double x){
    return -(x*x)+3*x; }
double g(double x){
    return (2*x*x*x)-(x*x)-5*x; }
int main() {
	int i,j
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	dx=(b-a)/n;
	for(i=1;i<n;i++){
	    sub[0]=a
	    sub[i]=sub[i-1]+dx; }
	for(i=0;i<n;i++){
	if(a>=-2&&b<=0||a>=2){
	    sum=0;
	        sum=(g(sub[i])-f(sub[i]))*dx; }
	 else {
	         sum=(f(sub[i])-g(sub[i]))*dx; } }
	printf("%.4lf",sum);
	return 0; }