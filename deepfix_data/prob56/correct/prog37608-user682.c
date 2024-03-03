#include <stdio.h>
#include <stdlib.h>
int catalan(int k) {
    if (k<=0)
    return 1;
    return (2*(2*k-1)/(k+1))*catalan(k-1); }
int main() {
	int t,i;
	scanf ("%d\n",&t);
	int k;
	for (i=0;i<t;i++) {
	    scanf ("%d\n",&k);
	    int j;
	    for (j=0;j<k;j++) {
	        if (catalan(j)>k) {
	            printf ("%d\n",catalan(j));
	            break; } } }
	return 0; }