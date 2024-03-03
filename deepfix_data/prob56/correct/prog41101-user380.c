#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else if(n>=1)
    return (2*(2*n+1)*catalan(n-1))/(n+2); }
int main() {
	int t,j;
	scanf("%d\n",&t);
	int i,k;
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    if(catalan(j)>k) {
	            printf("%d\n",catalan(j)); break; }
	    else j=j+1; }
	return 0; }