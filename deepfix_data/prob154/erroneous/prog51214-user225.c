#include <stdio.h>
#include <stdlib.h>
int main() {
	double x;
	scanf("%lf",&x);
	double fn(double x);
	printf("%lf",fn);
	return 0; }
double fn(double x){
    if(x<= (-1)) {
        fn == 1; }
    else if ( x>(-1) && x<1) {
        fn == x*x; }
    else {
        fn=x*x*x; }
    return fn; }