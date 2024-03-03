#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double function1(double c) {
    int func;
    func=-(pow(c,2))+3*c;
    return func; }
double function2(double d) {
    int funct;
    funct=2*(pow(d,3))-(pow(d,2))-5*d;
    return funct; }
double mod(double e) {
    if(e>=0)
      return e;
    else
      return -e; }
int main() {
	double a,b,x;
	int i,n;
	scanf("%lf%lf%lf",&a,&b,&n);
    double A[n];
    for(i=0;i<=n;i++)
    { A[i]=a+(i/n) }
    x=(b-a)/n;
    double count=0;
    for(i=0;i<n;i++)
    { count=count+(mod(function1(A[i])-function2(A[i])))*x; }
    printf("%lf",mod(-5));
	return 0; }