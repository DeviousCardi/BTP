#include <stdio.h>
#include <stdlib.h>
int catalan(n) {
    if(n==0)
    return 1;
    else
    return (2*(2*n-1)/(n+1))*catalan(n-1); }
int main() {
	int t;
	scanf("%d",&t);
	int k,i,j;
	for(i=0;i<t;i++) {
	    j=0;
	    scanf("%d",&k);
	    while(catalan(j)>k)
	    j++;
	    printf("%d\n",catalan(j)); }
	return 0; }