#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double a) {
    double i;
    i=(-(pow(a,2)))+3*a;
    return i; }
double g(double b) {
    double j;
    j=2*(pow(b,3))-pow(b,2)-5*b;
    return j; }
int main() {
    double a,b;
    int n;
    scanf("%lf%lf%d",&a,&b,&n);
    double x=(b-a)/n;
    int i,j;
    double A[n];
    for (i=0;i<n;i++) {
        A[i]=a+i*x }
    double area=0;
    for (j=0;j<n;j++) {
        area=area+abs(f(A[j])-g(A[j]))*x; }
    printf("%lf",&area);
	return 0; }