#include <stdio.h>
#include <stdlib.h>
long long int cat(int n) {
    if (n==0) {
        return 1; }
    else {
        return(2*(2*n-1)/(n+1))*cat(n-1); } }
int main() {
	int n;
	long long int k,i,j;
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {
	    scanf ("%lld\n",&k);
	    if (k>0) {
	    for (j=0;j<=k;j++) {
	        if (cat(j)==k) {
	            printf ("yes\n");
	            break; } }
	    if (j+1==k+1&&j!=1) {
	        printf ("no"); } }
	    else printf ("no"); }
	return 0; }