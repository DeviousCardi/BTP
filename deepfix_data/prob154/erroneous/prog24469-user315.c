#include <stdio.h>
#include <stdlib.h>
double y()  {
    double x;
    if (x<=-1)  {   y=1; }
	else if ((x>-1)&&(x<1)) { y=x*x;    }
	else { y=x*x*x; }
	return y; }
int main() {
	double a,b,d;
	int n;
	double sum=0;
	int i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	d=(b-a)/n;
	float X[n];
	X[0]=a;
	for(i=1;i<n;i++)    {
	    X[i]=a+(d*i); }
	for(i=0;i<n;i++)    {
	    x=X[i];
	    sum=sum+y; }
	printf("%.4lf",sum);
	return 0; }