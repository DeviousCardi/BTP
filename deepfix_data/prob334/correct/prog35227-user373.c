#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,b,i,j,k;
    scanf("%d",&n);
    scanf("%d",&b);
    for(i=1;i<=n;i++) {
        for(j=1;j<=(n-i);j++) printf(" ");
        for(k=i;k<=(i+b+1-2*n);k++) printf("%d",(k%10));
        printf("\n"); }
	return 0; }