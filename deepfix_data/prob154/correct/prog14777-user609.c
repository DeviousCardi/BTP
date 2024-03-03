#include <stdio.h>
#include <stdlib.h>
double mod(double a) {
    if (0<a)
    return a;
    if (a<0)
    return -a; }
int main() {
	double a,b,area;
	int n;
	scanf ("%lf%lf%d",&a,&b,&n);
	if (a<(-1) && b<(-1)){
	area=mod((b-a)/n*n*-1);
	printf ("%.4lf",area);}
	return 0; }