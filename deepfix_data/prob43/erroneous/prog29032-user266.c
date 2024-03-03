#include <stdio.h>
#include <stdlib.h>
int f(int x) {
    return 3*x-x*x; }
int g(int x) {
    return 2*x*x*x-x*x-5*x; }
int main() {
    int i,n;
    double a,b,area=0.0;
    scanf("%lf\n",&a);
	scanf("%lf\n",&b);
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    x=a+(b-a)/n;
	    area+=abs(f(x)-g(x))*(b-a)/n; }
	printf("%0.4f",area);
	return 0; }