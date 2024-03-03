#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double a){
    double r= -a*a + 3*a;
    return r; }
double g(double x){
double r= 2*x*x*x -x*x -5*x;
return r;}
int main() {
int n,i;double a,b,sum=0.0;
double x=a;
scanf("%lf%lf%d",&a,&b,&n);
for(i=0;i<n;i++){
    x=x+ i*(b-a)/n;
    sum=sum + fabs(f(x)-g(x))*(b-a)/n ; }
printf ("%.4lf",sum);
	return 0; }