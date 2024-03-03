#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return (2*((catalan(n-1))*((2*n)-1))/(n+1)); }
int main() {
	int t,i,n;
	scanf("%d",&t);
	for(i=0; i<t; i++) {
	    scanf("%d",&n);
	    printf("%d",catalan(n+2)); }
	return 0; }