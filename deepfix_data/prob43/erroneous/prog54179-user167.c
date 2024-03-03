#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b;
	double A(1),A(2);
	  scanf("%lf%lf",&a&b);
	  if ((a<0)&&(b>0)){
	  A(1) = 0-4*(pow(a,2)-pow(a,4)/2)+ (4* pow(b,2)-pow(b,4)/2);
	       printf("0.4%lf",A(1));}
	           else  if((a<0)&&(b<0))||((a>0)&&(b>0)) {
	  A(2) =  ( 4*pow(b,2) -pow(b,4)/2)-(4*pow(a,2)-pow(a,4)/2) ;
	       printf("0.4%lf",A(2));
	            else
	               printf("0.0000");
	return 0; }