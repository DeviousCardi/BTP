#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b;
	int n,i;
	double fx,x,area=0;
	scanf("%f%f",&a,&b);
	scanf("%d",&n);
	for(i=0;i<n;i=i+1)
	{   if(x<=-1)
     	fx=1;
     	if(x>-1 &&x<1)
     	fx=x*x;
     	if(x>1)
     	fx=x*x*x;
	    area=area +fx*(b-a)/n; }
	printf("%lf",&area);
	return 0; }