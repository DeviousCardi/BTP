#include <stdio.h>
#include <stdlib.h>
long int catalan(int n) {
    if(n==0) return 1;
    else
    return ((2*(2*n-1))/(n+1))*catalan(n-1); }
int main() {
	int t,i,j;
	long int k;
	scanf("%d", &t);
	for(i=1;i<=t;i++) {
	    scanf("%ld", &k);
	    for(j=0;j<=17;j++) {
	        if(catalan(j)==k) break; }
	    if(j>17) printf("no\n");
	    else printf("yes\n"); }
	return 0; }