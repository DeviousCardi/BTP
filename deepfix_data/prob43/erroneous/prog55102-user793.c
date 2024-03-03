#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double epsilon=0.000001;
double calc_area(double l,double u,int n;);
int main() {
	double a,b;
	int num;
	scanf("%lf %lf %d",&a,&b,&num);
	double area;
	area= calc_area(a,b,num);
	printf("%.4lf",area);
	return 0; }
double calc_area(double l,double u,int n) {
  double sub_int;
  sub_int=(u-l)/n;
  double f,g;
  double x1,;
  double ar;
  ar=0.0;
  for(x=l;x<u;x=x+sub_int) {
      f=-(x*x)+3*x;
      g=2*(x*x*x)-(x*x)-5*x;
      ar=ar+(abs(f-g))*sub_int+epsilon; }
  return ar; }