#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, k;
    scanf("%d",&n);
    k=(n+1)/2;
    for(i=1;i<=n;i++) {
        if(i<=k) {
            for(j=1;j<=(k-i);j++)
             printf(" ");
            for(j=i;j>0;j--)
             printf("%d",k-j+1); }
        else {
            for(j=1;j<(i%k);j++)
             printf("#"); }
        printf("\n"); }
	return 0; }