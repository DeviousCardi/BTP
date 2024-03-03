#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else if(n>0)
    return 2*(2*n-1)*catalan(n-1)/(n+1);
    else
    return 0; }
int main() {
    int i,t,A[16],n;
    int cat;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&A[i]);
	    n=A[i];
	    cat=catalan(n);
	    printf("%d\n",cat); }
	return 0; }