#include <stdio.h>
#include <stdlib.h>
double mod(double a){
if(a<=0) a=-a;
else a=a;
return a; }
int main() {
	double a,b,area,x;
	int n,i;
	scanf("%lf%lf%d",&a,&b,&n);
    double dx=(b-a)/(double)n;
    x=a;
    for(i=0;i<n;i++)
   { x=x+i*dx;
    area=area+mod(2.0*x*x*x-8.0*x);}
    printf("%lf",mod(1));
	return 0; }