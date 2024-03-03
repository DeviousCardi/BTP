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
	int k,i,a[t],j;
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    a[i]=k; }
	for(i=0;i<t;i++) {
	    printf("%d\n",catalan(a[i])); }
	return 0; }