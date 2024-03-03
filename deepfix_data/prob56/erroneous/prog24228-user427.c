#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    if(n==1);
    return 1;
    return catalan(n-1)*2*(2*n+1)/(n+2); }
int main() {
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++) {
	    int k;
	    scanf("%d",&k);
	    while (catalan(j)<k)
	    j++;
	    printf("%d",catalan(j)); }
	return 0; }