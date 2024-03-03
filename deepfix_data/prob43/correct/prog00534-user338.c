#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	double a,b,area=0,f,g;
	double x[n];
	scanf("%lf%lf%d",&a,&b,&n);
	for(i=0;i<n;i++) {
	    scanf("%lf",&x[i]); }
	f=-(x[i]*x[i])+3*x[i];
	g=2*x[i]*x[i]*x[i]-(x[i]*x[i])-5*x[i];
	for(i=0;i<n;i++) {
	    if(f>g)
	    {area=area+(f-g)*(b-a)/n;}
	    else
	    {area=area+(g-f)*(b-a)/n;} }
    printf("%lf",area);
	return 0; }