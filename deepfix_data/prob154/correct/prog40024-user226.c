#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,c,area=0;
	int n,i;
	scanf("%lf%lf%d",&a,&b,&n);
	for(i=0;i<n;i++) {
	    c=a+((b-a)/n)*i;
	    if(c<=-1)
	    area=area+(b-a)/n;
	    else if(c>-1&&c<1)
	    area=area+c*c*(b-a)/n;
	    else
	    area=area+c*c*c*(b-a)/n; }
	printf("%.4lf",area);
	return 0; }