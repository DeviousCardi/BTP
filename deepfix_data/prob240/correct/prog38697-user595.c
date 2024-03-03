#include <stdio.h>
#include <stdlib.h>
int cat(int n, int k) {
    if(n==0)
    return 1;
    else if(k==0)
    return 1;
    else if (n<k)
    return 0;
    else return cat(n-1,k)+cat(n-1,k-1); }
int main() {
    int t,i,n=0,catalan;
    scanf("%d",&t);
    int test[t];
    for(i=0;i<t;i++) {
        scanf("%d",&test[i]);
        n=0;catalan=(1/n+1)*cat(2*n,n);
        while (catalan<test[i]); {
            n++;
            catalan=(1/n+1)*cat(2*n,n); }
        printf("%d", (1/n)*cat(2*(n-1),n-1)); }
	return 0; }