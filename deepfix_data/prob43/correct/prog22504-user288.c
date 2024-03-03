#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n;
	double a,b,s1,s2,x,area,dx;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	dx=(b-a)/n;
	for(x=-2;x<=0;x++){
	    if(x>=a&&x<=b){
	    s1=s1+(2*x*x*x-8*x)*dx;
	}else
	break;}
	for(x=0;x<=2;x++){
	    if(x>=a&&x<=b){
	    s2=s2+(8*x-2*x*x*x)*dx;}
	    else
	    {break;} }
	    area=s1+s2;
	    printf("lf",&area);
	return 0; }