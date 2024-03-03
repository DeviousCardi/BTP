#include <stdio.h>
#include <stdlib.h>
int main() {
    double f(double x)
    {return((-(x*x))+3*x);}
    double g(double x)
    {return(2*x*x*x-(x*x)-5*x);}
    double a,b,term;double area=0.0;int n;
	scanf("%lf",&a);
	scanf("%lf"&b);
	scanf("%d"&n);
	for(i=a;i<b;i=i+(b-a)/n) {
term=abs(f(i)-g(i))*((b-a)/n);
area=area+term;}
printf("%lf",area);
	return 0; }