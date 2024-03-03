#include <stdio.h>
#include <stdlib.h>
double catalan(double k) {
    if (k<=0)
    return 1;
    return (2*(2*k-1)/(k+1))*catalan(k-1); }
int main() {
	double t,i;
	scanf ("%lf\n",&t);
	double k;
	for (i=0;i<t;i++) {
	    scanf ("%lf\n",&k);
	    int j;
	    for (j=0;j<k;j++) {
	        if
	        if (catalan(j)>k) {
	            printf ("%lf\n",int(catalan(j)));
	            break; } } }
	return 0; }