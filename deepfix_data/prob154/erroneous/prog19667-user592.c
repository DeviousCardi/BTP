#include <stdio.h>
#include <stdlib.h>
 double p(double l,double m,int n){
     inti;
     double sum;
     for (i=0;i<n;i++){
         sum=sum+((m-l)*/n)*(l+(m-l)*i/n)*(l+(m-l)*i/n) }
     return sum; }
  double q(double l,double m,int n){
     inti;
     double sum;
     for (i=0;i<n;i++){
         sum=sum+((m-l)*/n)*(l+(m-l)*i/n)*(l+(m-l)*i/n)*(l+(m-l)*i/n) }
     return sum; }
int main() {
	int n;
	double a,b;
	scanf("%lf\n",&a);
	scanf("%lf\n",&b);
	scanf("%d\n",&n);
	if (a<=-1) {
	    if (b<=-1) {
	        printf("%lf\n",b-a); }
	    else if (b>-1&&b<1)
	    {  z==(-1-a)+p(-1,b,n);
	        printf("%lf\n",z); }
	    else (b=>1) {
	        x==(-1-a)+p(-1,1,n)+q(1,b,n); } }
	return 0; }