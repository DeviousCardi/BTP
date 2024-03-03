#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b;
	scanf ("%lf%lf",&a,&b);
	int n;
	scanf ("%d",&n);
	double deltaX,area=0,fi,gi;
	deltaX=(b-a)/n;
	double i;
	for (i=a;i<=b;i=i+deltaX){
	    fi=-i*i+3*i;
	    gi=(2*pow(i,3))-i*i-5*i;
	if (a>=0){
	area=area+(fi-gi)*deltaX;
	i=i+deltaX;
	printf ("%.4lf",area); }
	else if (a<=0 && b>=0)
	double area1=0;area2=0;
	for (i=a;i<=0;i=i+deltaX){
	    area1=area1+(gi-fi)*deltaX }
	for (i=0;i<=b;i=i+deltaX){
	    area2=area2+(fi-gi)*deltaX; }
	printf ("%.4lf",area1+area2); }
	return 0; }