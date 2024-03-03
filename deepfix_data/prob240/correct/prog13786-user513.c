#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
       if (n==0)
    return 1;
    else if (n==1)
    return 1;
    else {
       return ((4*n-2)*catalan(n-1))/(n+1); } }
int main() {
    int i,j,n,k,t;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        printf("%d",catalan(k-1)); }
    return 0; }