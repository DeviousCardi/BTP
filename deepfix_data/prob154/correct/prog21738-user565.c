#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b;
	int n,i;
	double fi,area=0;
	scanf("%f%f",&a,&b);
	scanf("%d",&n);
	for(i=0;i<n;i=i+1)
	{   if(i<=-1)
     	fi=1;
     	if(i>-1 && i<1)
     	fi=i*i;
     	if(i>1)
     	fi=i*i*i;
	    area=area +fi*(b-a)/n; }
	printf("%lf",&area);
	return 0; }