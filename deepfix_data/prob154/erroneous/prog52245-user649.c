#include <stdio.h>
#include <stdlib.h>
double power(double x, int n) {
    int i;
    double ans=1;
    for(i=1; i<=n; i++)
        ans=ans*x;
    return ans; }
double function(double x) {
    if(x<=-1)
        return 1;
    else if(x>-1 && x<1)
        return power(x,2);
    else
        return power(x,3); }
double area_func(double a, double b, int n) {
    double shift, x, area=0;
    int i;
    shift=(b-a)/n;
    for(i=0; i<n; i++) {
        x=a+(i*shift);
        area=area+(shift*function(x)); }
    return area; }
int main() {
	int n;
	double a, b;
	scanf("%lf ", &a);
	scanf("%lf ". &b);
	scanf("%d", n);
	printf("%0.4lf", area_func(a, b, n));
	return 0; }