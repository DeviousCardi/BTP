#include <stdio.h>
#include <stdlib.h>
int main() {
	double  a,b;
	double   n,i;
	double fi,area=0;
	scanf("%lf%lf",&a,&b);
	scanf("%lf",&n);
	for(i=a;i<=b;i=i+(b-a)/n)
	{   if(i<=-1)
     	fi=1;
     	if(i>-1 && i<1)
     	fi=i*i;
     	if(i>1)
     	fi=i*i*i;
	    area=area +fi*(b-a)/(n*1.0); }
	printf("%.4lf",&area);
	return 0; }