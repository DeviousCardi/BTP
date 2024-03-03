#include <stdio.h>
#include <stdlib.h>
int cat(int (n+1)) {
    if(n==0)
    return 1;
    return ((2*(2*n+1))/(n+2))*cat(n); }
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    printf("%d\n",cat(k)); }
	return 0; }