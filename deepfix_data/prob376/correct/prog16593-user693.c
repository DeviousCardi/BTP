#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return catalan(n-1)*(4*n-2)/(n+1); }
int main() {
	int t,i,n;
	int s[100];
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&s[i]); }
	for(i=0;i<t;i++) {
	    n=s[i];
	    printf("%d\n",catalan(n)); }
	return 0; }