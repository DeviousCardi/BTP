#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b,s1=0.0,s2=0.0,x,area,dx;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	 dx=(double)(b-a)/n;
	 if(a<=0&&b<=0){for(x=a;x<=b;x++){
	    s1=s1+(2*x*x*x-8*x)*dx;}
	    printf("%.4lf",&s1);}
	    if(a>=0&&b>=0){for(x=a;x<=b;x++){
	    s2=s2+(8*x-2*x*x*x)*dx;}
	    printf("%.4lf",&s2);
	    }if(a<=0&&b>=0){
	        for(x=0;x>=a;x--){
	            s1=s1+(2*x*x*x-8*x)*dx;
	        }for(x=0;x<=b;x++){
	            s2=s2+(8*x-2*x*x*x)*dx;
	        }area=s1+s2;
	    printf("%.4lf",&area); }
	return 0; }