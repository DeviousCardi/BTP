#include <stdio.h>
#include <stdlib.h>
int toh(int n) {
    if(n==0)
    return 0;
    else
    return (2*toh(n-1)+1); }
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    printf("%d\n",toh(k)); }
	return 0; }