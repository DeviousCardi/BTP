#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
        return 1;
    else
        return catalan(n-1)+n-1; }
int main() {
    int t,k,i,j,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k);
        for(j=1;j<=k;j++) {
            sum=sum+catalan(j); }
        printf("%d",sum); }
	return 0; }