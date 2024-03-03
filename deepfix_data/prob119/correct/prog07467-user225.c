#include <stdio.h>
#include <stdlib.h>
int steps(int n) {
    if(n==1)
    return 1;
    else
    return 2*steps(n-1)+1; }
int main() {
	int t,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&n);
	    steps(n);
	    printf("\n"); }
	return 0; }