#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int k;
    k=2*(2*n-1)/(n+1);
    if(n==0)
    return 1;
    if(n>0)
    return k*catalan(n-1); }
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