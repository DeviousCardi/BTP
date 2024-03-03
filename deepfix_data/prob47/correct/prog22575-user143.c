#include <stdio.h>
#include <stdlib.h>
int fac(int n) {
    if(n==0)
    return 1;
    else
    return (n*fac(n-1)); }
int catalan(int n) {
    int b;
    b=fac(n+1)*fac(n);
    return fac(2*n)/b; }
int main() {
    int n,i,t,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&t);
        for(j=0;j<=t;j++) {
            sum=sum+catalan(j); }
        printf("%d",sum); }
	return 0; }