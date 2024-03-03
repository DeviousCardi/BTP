#include <stdio.h>
#include <stdlib.h>
double catalan(double k) {
    if (k<=0)
    return 1;
    return (2*(2*k-1)*catalan(k-1))/(k+1); }
int main() {
	double t,i;
	scanf ("%lf\n",&t);
	double k;
	for (i=0;i<t;i++) {
	    scanf ("%lf\n",&k);
	    int j;
	    for (j=0;j<=k+100000;j++) {
	        if (catalan(j)>k) {
	            int a=catalan(j);
	            printf ("%d\n",a);
	            break; } } }
	return 0; }