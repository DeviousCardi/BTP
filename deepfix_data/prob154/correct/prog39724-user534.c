#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,sum,sum1,sum2=0.00,sum3;
	int n,i;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	double intrvl=(b-a)/n;
	if (a<=-1) {
	    if(b<=-1) {
	    sum=(b-a);
	    printf("%.4lf",sum); }
	    else if((b>-1)&&(b<1)) {
	        sum1=(-1)-a;
	        for (i=0;i<(n*(b+1)/(b-a));i++) {
	            sum2=sum2+(-1+i*intrvl)*(-1+i*intrvl); }
	        sum=sum1+sum2;
	        printf("%.4lf",sum); }
	    else if (b>=1) {
	        sum1=(-1)-a;
	        sum3=2.00/3.00;
	        for (i=0;i<(n*(b-1)/(b-a));i++) {
	            sum2=sum2+(1+i*intrvl)*(1+i*intrvl)*(1+i*intrvl); }
	        sum=sum1+sum2+sum3;
	        printf("%.4lf",sum); } }
	    return 0; }