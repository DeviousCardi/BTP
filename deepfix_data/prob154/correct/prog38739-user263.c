#include <stdio.h>
#include <stdlib.h>
double a;
double b;
int func_val(int p,double m);
int main() {
    double totarea=0.0;
	int n;
	int i=0;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	double d=(b-a)/n;
	for(i=1;i<=n;i++) {
	    printf ("%lf\n",func_val(i,d));
	    printf ("%lf",func_val(i,d)*d);
	    totarea=totarea+func_val(i,d)*d; }
	printf("%.4lf",totarea);
	return 0; }
int func_val(int p,double m) {
    double x=a+(double)(p-1)*m;
    if(x<=-1) {
         return 1.0; }
    else if(x>-1&&x<1) {
        return x*x; }
    else if(x>=1) {
        return x*x*x; } }