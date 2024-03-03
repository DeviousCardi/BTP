#include <stdio.h>
#include <stdlib.h>
double power(double a, int b) {
    int i;
    double product = 1.0;
    for (i=1;i<=b;i++) {
        product=product*a; }
    return product; }
double mod(double x) {
    double val = (x>0) ? x : -x;
    return val; }
int main() {
    double c = mod(-3.1414);
	printf("%lf",c);
	return 0; }