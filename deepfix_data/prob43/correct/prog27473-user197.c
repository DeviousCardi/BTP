#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    double a,b;
    int n;
    scanf("%lf%lf%d",&a,&b,&n);
	double fa(double a)
	{double m=-a*a+3*a;
	 return m; }
	double fb(double a)
	{double m=2*a*a*a-a*a-5*a;
	return m; }
	double rectangle(a,b) {
	 double area;
	 area=(abs(fa(a)-fb(a)))*b;
	return area; }
	double findarea(double a,double b,int n) {
	    int i;
	    double x=(b-a)/n;
	    double area=0;
	    for(i=a;i<=(b-x);i=i+x)
	    {area=area+rectangle(i,x);}
	    return area; }
	printf("%.4lf",findarea(a,b,n));
	return 0; }