#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    return 2*(2*n-1)*catalan(n-1)/(n+1); }
int main() {
	int t,k,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    j=0;
	    scanf("%d",&k);
	    if(k==1) {
	        printf("yes");
	        continue; }
	    while(catalan(j)<=k) {
	        if(catalan(j)==k) {
	            printf("yes\n"); }
	        j++; }
	    if(j==0)
	    printf("no\n"); }
	return 0; }