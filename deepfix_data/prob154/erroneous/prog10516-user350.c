#include <stdio.h>
#include <stdlib.h>
double f(double x)
if (x<=-1) {
    f = 1, }
if else (x>-1&&x<1) {
    f = pow(x,2), }
if else (x>=1) {
    f = pow(x,3); }
int main() {
	int i,n;
	double a,b,area=0;
	scanf("%d%lf%lf",n,a,b);
	for(i=0;i<n;i++) {
	    area = area + f*(b-a)/n; }
	printf("%lf",area);
	return 0; }