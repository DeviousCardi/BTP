#include <stdio.h>
#include <stdlib.h>
double f(double a) {
    int fun=0;
    fun=(-1)*a*a + 3*a;
    return fun; }
double g(double a) {
    int fun=0;
    fun=2*a*a*a -a*a- 5*a;
    return fun; }
double mod(double b) {
    int p;
    if (b>0)
    p=b;
    else
    p=(-1)*b;
    return p; }
int main() {
	double a, b;
	int n,i;
	scanf("%lf%lf%d",&a,&b,&n);
	double delx=(b-a)/n;
	double arr[n];
	for(i=0;i<n;i++) {
	    arr[i]=a+i*delx; }
	double h= mod(g(arr[i])-f(arr[i]));
	double sum=0;
	for(i=0;i<n;i++) {
	    double p=h*delx;
	    sum= sum+p; }
	printf("%0.4lf",sum);
	return 0; }