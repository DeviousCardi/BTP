#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	float a,b,t,g,area=0;
	float array[100];
	int i,n,s;
	scanf("%f %f %d",&a,&b,&n);
	g=(b-a)/n;
	s=a;
	for(i=0;i<=n;i++) {
	      array[i]=s;
	      scanf("%f",&array[i]);
	      s=s+g; }
	 for(i=0;i<n;i++) {
	   t=((8*(array[i]))-(2*(array[i])*(array[i])*(array[i])))*g;
	    if(t>=0) {
	        area=area+t; }
	    else
	        area=area+(-t); }
	   printf("%.4f",area);
   return 0; }