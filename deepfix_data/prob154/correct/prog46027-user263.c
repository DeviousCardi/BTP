#include <stdio.h>
#include <stdlib.h>
double a;
double b;
double func_val(int p,double m);
int main() {
    double totarea=0.0;
	int n;
	int i=0;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	double d=(b-a)/n;
	for(i=1;i<=n;i++) {
	    printf("%lf",func_val(i,d));
	    totarea=totarea+func_val(i,d)*d; }
	printf("%.4lf",totarea);
	return 0; }
 double func_val(int p,double m) {
    double val =0.0;
    double x=a+(double)(p-1)*m;
    if(x<=-1) {
         val=1; }
    else if(x>-1&&x<1) {
        val=x*x; }
    else if(x>=1) {
        val=x*x*x; }
     printf("%lf",val); }