#include <stdio.h>
#include <stdlib.h>
int catalan(int n);
int main() {
	int i,t,j,k;
	scanf("%d",&t);
	for(j=0;j<t;j++) {
	    scanf("%d",&k);
	    i=0;
	    while(catalan(i)<k) {
	        i++; }
	    printf("%d\n",catalan(i-1)); }
	return 0; }
int catalan(int n) {
    if(n==0)
    return 1;
    int m;
    m=2*(2*n-1)/(n+1);
    return m*catalan(n-1); }