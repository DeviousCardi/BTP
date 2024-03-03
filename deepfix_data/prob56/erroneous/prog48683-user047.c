#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int cat;
    if(n==0) return 1;
    cat=catalan(n-1)*(4*n-2)/(n+1);
    return cat; }
int main() {
	int t,i;
	long k[20],cat[20];
	scanf("%d\n",&t);
	for(i=0;i<t;i++) scanf("%ld\n",&k[i]);
	for(i=0;i<20;i++) cat[i]=catalan(i);
	for(i=0;i<t;i++) {
	    for(j=0;j<20;j++) {
	        if(k[i]>cat[j]) {
	            printf("%ld\n",cat[j]);
	            break; } } }
	return 0; }