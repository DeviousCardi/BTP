#include <stdio.h>
#include <stdlib.h>
long long int cat(int n) {
    if (n==0) {
        return 1; }
    else {
        return(2*(2*n-1)*cat(n-1)/(n+1)); } }
int main() {
	int n;
	long long int k,i,j;
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {
	    scanf ("%lld\n",&k);
	    if (k<=0) {
	        printf("no"); }
	    if (k>0) {
	        if (k==1) {
	            printf ("yes"); }
	        else {
	            for (j=2;j<k;j++) {
	                if (cat(j)==k) {
	                    printf ("yes");
	                    break; } }
	            if (j==k) printf("no"); } } }
	return 0; }