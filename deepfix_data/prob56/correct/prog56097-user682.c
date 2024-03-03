#include <stdio.h>
#include <stdlib.h>
int catalan(int k) {
    if (k<=0)
    return 1;
    return (2*(2*k-1)/(k+1))*catalan(k-1); }
int main() {
	int t;
	scanf ("%d\n",&t);
	int k,i;
	for (i=0;i<t;i++) {
	    scanf ("%d\n",&k);
	    printf ("%d\n",catalan(k)+1); }
	return 0; }