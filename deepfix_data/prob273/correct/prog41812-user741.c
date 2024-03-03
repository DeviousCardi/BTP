#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, k;
    scanf("%d",&n);
    k=(n+1)/2;
    for(i=1;i<=n;i++) {
        if(i<=k) {
            for(j=1;j<=(n-i);j++)
             printf(" ");
            for(j=i;j>0;j--)
             printf("%d",k-j); }
        printf("\n"); }
	return 0; }