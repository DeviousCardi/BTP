#include <stdio.h>
#include <stdlib.h>
double catalan(double k) {
    if (k<=0)
    return 1;
    return (2*(2*k-1)/(k+1))*catalan(k-1); }
int main() {
	int t;
	scanf ("%d\n",&t);
	double k,i;
	for (i=0;i<t;i++) {
	    scanf ("%lf\n",&k);
	    if (k<=0)
	    printf ("1");
	    else
	    printf ("%lf\n",catalan(k)+1); }
	return 0; }