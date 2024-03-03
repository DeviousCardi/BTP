#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    double a,b;
    int n;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
	double f(double i)
	{double m;
	 m=(-i*i)+3*i;
	 return m; }
	double g(double i)    )
	{double m;
	 m=2*i*i*i-i*i-5*i;
	return m; }
	double rectangle(double i,double j) {
	 double area;
	 area=(abs(f(i)-g(i)))*j;
	return area; }
	double findarea(double i,double j,int k) {
	    double m;
	    double x=(j-i)/k;
	    double area=0;
	    if(i==j)
	    {area=0;}
	    else
	    {for(m=i;m<j;m=m+x)
	    {area=area+rectangle(m,x);}}
	    return area; }
	printf("%.4lf",findarea(a,b,n));
	return 0; }