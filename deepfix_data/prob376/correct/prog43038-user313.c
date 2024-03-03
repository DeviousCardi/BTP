#include <stdio.h>
#include <stdlib.h>
int cat(int k) {
    if(k==0) return 1;
    return 3*cat(k-1)-2*k+1; }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    printf("%d\n",cat(k)); }
    return 0; }