#include <stdio.h>
#include <stdlib.h>
int cat(int n, int k) {
    if (n<k)
    return 0;
    else if(n==0)
    return 1;
    else if(k==0)
    return 1;
    else return cat(n-1,k)+cat(n-1,k-1); }
int main() {
    int t,i,n=0,catalan;
    scanf("%d",&t);
    catalan=(1/t+1)*cat(2*t,t);
    printf("%d",catalan);
	return 0; }