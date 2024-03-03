#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b,f,g,del,diff,sum=0.0;
	int n;
	scanf("%lf%lf%d",&a,&b,&n);
	   del=(b-a)/n;
	  for(i=0;i<n;i++){
	    f =(-pow(i,2))+3*(i);
	    g =2*(pow(i,3))-(pow(i,2))-5*(i);
	    diff=(f-g);
	     area=diff*del;
	    if (diff<0) diff=-diff;}
       for(i=0;i<n;i++){
           sum=sum+area; }
	return 0; }