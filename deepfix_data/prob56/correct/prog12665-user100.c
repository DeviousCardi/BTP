#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++) {
        int n,j,sum=0;
        scanf("%d",&n);
        if(n<0)
        sum=1;
        for(j=0;j<=n;j++)
        sum=sum+catalan(j);
        printf("%d\n",sum); }
	return 0; }
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return (2*(2*n-1)*catalan(n-1))/n+1; }