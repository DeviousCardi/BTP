#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return ((catalan(n-1)*2*(2*n-1))/(n+1)); }
int main() {
	int t,i,n,j;
	scanf("%d",&t);
	for(i=0; i<t; i++) {
	    scanf("%d",&n);
	    for(j=0; j<=n; j++) {
	        if(catalan(j)>=n) {
	            printf("%d\n",catalan(j));
	            break; } } }
	return 0; }