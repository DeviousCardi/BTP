#include <stdio.h>
#include <stdlib.h>
long int sum=0;
long int catalan(long int n) {
    int i;
    if (n==0)
    return 1;
    else
    return ((2*(2*n+1))/(n+1))*catalan(n-1); }
int main() {
    int test,i,j,n,k=0,u;
    printf("%ld",catalan(17));
	return 0; }