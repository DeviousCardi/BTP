#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    return catalan(n-1)*(2*n-1)*(2/(n+1)); }
int main() {
	int j=1,t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    j=1;
	    while(catalan(j)<=k) {
	        j++; }
	    printf("%d\n",catalan(j)); }
	return 0; }