#include <stdio.h>
#include <stdlib.h>
 double f(double a){
    double c;
     if(a<=-1)
     return 1;
     if (a>=-1 && a<=1)
     return a*a;
     if (a>=1)
     c=a*a*a ;
     return c; }
int main() {
    printf("%lf",f(.5));
	int i,n;
	double a,b,x,sum;
	scanf("%lf",&a);
	scanf("%lf",&b);
		scanf("%d",&n);
		x=((b-a)/n);
		for (i=0;i<n;i++){
		  sum=sum+f(a+(i*x))*x;
		  	}printf("%.4lf",sum);
	return 0; }