#include <stdio.h>
#include <stdlib.h>
double f(double x){
    return (-x*x)+(3*x); }
double g(double x){
    return (2*x*x*x)-(x*x)-(5*x); }
double mod(double x){
    if(x>0){
        return x; }
    if(x<0){
        return (-x); } }
int main() {
	double a,b,c,y,area,sum=0;
	int n;
	int i;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	    for(i=0;i<n;i++){
	        c=(b-a)/n;
	        y=(f(a+i*c)-g(a+ic))*c;
	        area=mod(y);
	        sum=sum+area; }
	 printf("%lf",sum);
	return 0; }