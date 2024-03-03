#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,i,y,area=0;double a,b;
	scanf("%lf%lf%d",&a,&b,&n);
	double dx=((double)b-a)/(double)n;
	while(i<n)
	y=a+i*dx;
	area=area+(abs(-y*y+3*y-2*y*y+y*y+5*y))*dx;
	i++;
	return 0; }