#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double x) {
    double k;
     k=(-1*x*x)+(3*x);
    return k; }
double g(double x) {
    double k;
    k=(2*x*x*x)-(x*x)-(5*x);
    return k; }
int main() {
    int a,b,n,i,j,m;
    double area=0;
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&n);
    int x[n+1];
    for(i=0;i<=n;i++)
    {    x[0]==a;
    x[i]=x[i]+(b-a)/n; }
    for (j=0;j<=n;j++) {
        m=(abs( f(x[j])  - g(x[j]) ) )*((b-a)/n);
        area=area+m; }
    printf ("%lf",area);
	return 0; }