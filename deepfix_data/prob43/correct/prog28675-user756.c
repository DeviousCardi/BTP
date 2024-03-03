#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int mod(int a) {
    if(a>0){
        a=a; }
    else{
        a=-a; }
    return a; }
double f(double x) {
    double y=-(x*x)+(3*x);
    return y; }
double g(double x) {
    double y=(2*x*x*x)-(x*x)-(5*x);
    return y; }
int main() {
    int n,i,j;
    double a,b,sum;
    sum=0;
    scanf("%lf %lf %d",&a,&b,&n);
    double dx=(b-a)/n;
    double x[n+1];
    for(i=0;i<n+1;i++) {
        x[i]=a+i*dx; }
    for(j=0;j<n;j++){
        sum=sum+(mod(f(x[j])-g(x[j])))*dx; }
    printf("%.4lf",sum);
	return 0; }