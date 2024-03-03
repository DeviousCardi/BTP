#include <stdio.h>
#include <stdlib.h>
double mod(double value) {
    double ans;
    ans = 2 * pow(value,3) - 8 * value;
    if(ans>=0) {
        return ans; }
    else {
        return (-1 * ans); } }
int main() {
	double a, b;
	scanf("%lf\n",&a);
	scanf("%lf\n",&b);
	int n;
	scanf("%d",&n);
	double x;
	x = (b-a)/n ;
	int a[n+1];
	for(i=0;i<=n;i++) {
	    a[i] = a + x*i; }
	double area =0;
	for(i=0;i<=n;i++) {
	    area = area + mod(a[i]) * x ; }
	printf("%.4lf",area);
	return 0; }