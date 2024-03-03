#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b;
	double A1=0,A2=0,A3=0, Area=0;
	double i,x;
	int n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	x=(double)(b-a)/n;
	for(i=a;i<b;i=i+x){
	    if(i<(-1.0)){
	        A1=A1+x; }
	    else if ((i>=(-1.0))&&(i<1.0)){
	        A2=A2+(i*i*x); }
	    else if (i>=1.0){
	        A3=A3+(i*i*i*x); } }
	Area = A1+ A2+ A3;
	printf("%0.4lf",Area);
	return 0; }