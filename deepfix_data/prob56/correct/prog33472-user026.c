#include <stdio.h>
#include <stdlib.h>
long catalan(long n) {
    int i;
    long s=0;
    if(n==0||n==1)
    return 1;
    else {
        for(i=0;i<n;i++) {
            s=catalan(i)*catalan(n-1-i)+s; }
        return s; } }
int main() {
	int n,i,j;
	long k;
	scanf("%d\n",&n);
	long ar[n];
	for(i=0;i<n;i++) {
	    scanf("%ld\n",&ar[i]); }
	for(i=0;i<n;i++) {
	for(j=0;j<17;j++) {
	    k=catalan(j);
	    if(k>ar[i]) {
	        printf("%ld\n",k);
	        break; } } }
	return 0; }