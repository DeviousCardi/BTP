#include <stdio.h>
#include <stdlib.h>
double modd(double value) {
    if(value>=0)
    return value;
    else {
        value = (-1)*value;
        return value; } }
double func(double x2) {
    double ret;
    ret=modd( 8*x2 - 2*x2*x2*x2 );
    return ret; }
int main() {
	double j;
    j=func(1);
    printf("%lf",j);
	return 0; }