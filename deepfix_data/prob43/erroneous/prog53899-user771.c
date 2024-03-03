#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double epsilon=0.000001
double mod(double i) {
  double ans;
  ans=i>0?i:-i;
  return ans; }
double f(double x) {
    double ans;
    ans=-x*x+3*x;
    return ans; }
double g(double x) {
    double ans;
    ans=2*x*x*x-x*x-5*x;
    return ans; }
int main() {
    double a,b,dx,ans=0;
    int n,i;
    scanf("%lf%lf%d",&a,&b,&n);
    dx=(b-a)/n;
      for(i=0;i<n;i++) {
        ans=dx*mod(f(a+i*dx)-g(a+i*dx))+ans; }
    printf("%.4lf",ans+epsilon);
	return 0; }