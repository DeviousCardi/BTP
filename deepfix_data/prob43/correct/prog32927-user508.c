#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,i=0;double y,a,b,area=0;
	scanf("%lf%lf%d",&a,&b,&n);
	double dx=((double)b-a)/(double)n;
	while(y<b)
	{y=a+i*dx;
	area=area+(abs(-y*y+3*y-2*y*y+y*y+5*y))*dx;
	i++;}
	printf("%lf",area);
	return 0; }