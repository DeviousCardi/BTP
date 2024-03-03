#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,c,e;
	int n;
	scanf("%lf %lf %d",&a,&b,&n);
	double x, y1, y2;
	y1=-x*x+3*x;
	y2=2*x*x*x-x*x-5*x;
	double d[n+1];
	int i;
	for(i=0;i<n;i++)
	{c=i*(b-a);
	    d[i]=a+c/n; }
	double sum=0.0;
	for(i=0;i<n+1;i++) {
	    x=d[i];
	    e=y1-y2;
	    printf("%f\n",d);}
	return 0; }