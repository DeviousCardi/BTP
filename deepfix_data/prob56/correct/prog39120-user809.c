#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    if(n==1)
    return 2;
    else
    return (2*((catalan(n-1))*((2*n)-1))/(n+1)); }
int main() {
	int t,i,n;
	scanf("%d",&t);
	for(i=0; i<t; i++) {
	    scanf("%d",&n);
	    printf("%d\n",catalan(n+1)); }
	return 0; }