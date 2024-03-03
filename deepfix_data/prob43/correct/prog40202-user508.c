#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,i=1;double y,a,b,area=0;
	scanf("%lf%lf%d",&a,&b,&n);
	double dx=((double)b-(double)a)/(double)n;
	while(y<b)
	{y=a+i*dx;
	area=area+(abs(-y*y+3*y-2*y*y*y+y*y+5*y))*dx;
	i++;}
	printf("%.4lf",area);
	return 0; }