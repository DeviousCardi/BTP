#include <stdio.h>
#include <stdlib.h>
int catalan(n) {
    if(n==0)
    return 1;
    else
    return catalan(n-1)*((4*n)-2)/(n+1); }
int main() {
	int t;
	scanf("%d",&t);
	int i,k;
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    printf("%d\n",catalan(k)); }
	return 0; }