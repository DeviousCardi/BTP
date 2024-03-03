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
int catalan(int n) {
    return (1.0/(n+1))*cat(2*n,n); }
int main() {
    int t,i,n=0,co,temp;
    scanf("%d",&t);
    int test[10];
    for(i=0;i<t;i++) {
        scanf("%d",test+i);
        n=0,co=1;
        printf("%d\n",catalan(i)); }
    printf("%d",catalan(t));
	return 0; }