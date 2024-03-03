#include <stdio.h>
#include <stdlib.h>
double B(int n, int k) {
    if (n<k)   return 0;
    if (k==0)  return 1;
    return B(n-1, k)+B(n-1, k-1); }
int main() {
	double b;
	scanf ("%lf",&b);
	double n,k;
	if (b<0)
	printf ("-1");
	else if (b=0)
	printf ("0 1");
	else
	for (n=0;n<=20;n++) {
	    for (k=0;k<=n;k++) {
	        if (B(n, k)==b) {
	            printf ("%d %d",(int)n,(int)k);
	            exit (0); } } }
	return 0; }