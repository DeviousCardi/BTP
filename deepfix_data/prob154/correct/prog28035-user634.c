#include <stdio.h>
#include <stdlib.h>
const double epsilon = 0.000001;
int main() {
	int n,x,i;
	float a,b;
	scanf("%f%f%d",&a,&b,&n);
	float s=0.0;
	for(i=0;i<n;i++) {
	    x=a+i*((b-a)/n);
	    if((x+1)<=epsilon)
	        s=s+1;
	    else if((x+1)>epsilon&&(x-1)<epsilon)
	        s=s+x*x;
	    else if((x-1)>=epsilon)
	        s=s+x*x*x; }
	printf("%.4f",s*(b-a)/n);
	return 0; }