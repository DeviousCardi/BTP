#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b,deltax,f(x),g(x),sum,area,x;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	deltax=(b-a)/n;
	sum=0;
	for(i=0;i<n;i++) {
	    x=(i*deltax)+a;f(x)=-(x*x)+3*x;g(x)=2*(x*x*x)-(x*x)-5*x;
	    if(x>=(-2)&&x<=0)
	    {area=(-f(x)+g(x))*deltax;
	    sum=area+sum;}
	    else
	    if(x>0&&x<=2)
	    {area=(f(x)-g(x))*deltax;
	    sum=area+sum;} }
	printf("%.4lf",sum)
	return 0; }