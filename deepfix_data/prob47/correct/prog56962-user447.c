#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i;
    if(n==0) return 1;
    return catalan((n-1)*(2*n-1)*2/(n*(n+1))); }
int main() {
	int t,i,a;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&a);
	    printf("%d\n",catalan(a)); }
	return 0; }