#include <stdio.h>
#include <stdlib.h>
int fac(int n) {
    if(n==0)
    return 1;
    else
    return (n*fac(n-1)); }
int catalan(int n) {
    long int b;
    b=fac(n+1)*fac(n);
    return fac(2*n)/b; }
int main() {
    int n,i,t,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        long int sum=0;
        scanf("%d",&t);
        if (t==0)
        sum=0;
        if (t>0) {
            for(j=0;j<t;j++) {
                printf("%d",catalan(j));
                sum=sum+catalan(j); } }
        printf("%ld\n",sum); }
	return 0; }