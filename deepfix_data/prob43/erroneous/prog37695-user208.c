#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double mod(double t){
    if (t>=0)
    return t;
    else
    return (-)t; }
int main() {
	double a,b,area,f,g,x;
	int n;
	scanf("%lf%lf%d",&a,&b,&n);
	f=(-)pow(x,2)+3*x;
	g=2*pow(x,3)-pow(x,2)-5*x;
	if((x>=a)&&(x<=b)){
	    for(i=0;i<n;i++){
	        area=mod((f-g))*((b-a)/n)
	        printf("%lf",area) } }
	return 0; }