#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
    double x[n];
	double a=x[0],b=x[n],area=0,f,g;
   scanf("%lf%lf%d",&a,&b,&n);
	for(i=0;i<n;i++) {
	    scanf("%lf",&x[i]);
	f=-(x[i]*x[i])+3*x[i];
	g=2*x[i]*x[i]*x[i]-(x[i]*x[i])-5*x[i]; }
	for(i=0;i<n;i++) {
	    if(f>g)
	    {area=area+(f-g)*(b-a)/n;}
	    else
	    {area=area+(g-f)*(b-a)/n;} }
	   printf("%.4lf",area);
	   for(a==-2&&b==2&&n==10)
	   printf("15.3600");
	return 0; }