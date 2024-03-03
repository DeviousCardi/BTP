#include <stdio.h>
#include <stdlib.h>
double f(double x) {
    if(x<=(-1))
    {return 1;}
    if((x>(-1))&&(x<1))
    {return x*x;}
    if(x>=1)
    {return x*x*x;} }
int main() {
    double a,b,c,area,sum=0;
    int n,i;
    scanf("%lf %lf %d",&a,&b,&n);
    c=(b-a)/n;
    for(i=0;i<n;i++) {
        area=f(a+i*c)*(b-a)/n;
        sum=sum+area; }
	printf("%lf",sum);
	return 0; }