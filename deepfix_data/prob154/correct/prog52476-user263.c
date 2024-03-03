#include <stdio.h>
#include <stdlib.h>
double a;
double b;
double d;
int func_val(int p);
int main() {
    double totarea=0.0;
	int n;
	int i=0;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	double d=(b-a)/n;
	printf("%lf",d);
	for(i=1;i<=n;i++) {
	    totarea=totarea+func_val(i)*d; }
	return 0; }
int func_val(int p) {
    double val =0.0;
    double x=a+(p-1)*d;
    printf("%d",x);
    if(x<=-1) {
         val=1; }
    else if(x>-1&&x<1) {
        val=x*x; }
    else if(x>=1) {
        val=x*x*x; }
    printf("%lf",val);
    return val; }