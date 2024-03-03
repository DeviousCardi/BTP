#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return ((2*(2*n-1)/((n+1)*(n)))*catalan(n-1)); }
int main() {
    int t,i,j,n,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        sum=0;
        scanf("%d",&n);
        for(j=0;j<n;j++) {
            sum=sum+catalan(j); }
        printf("%d\n",sum); }
	return 0; }