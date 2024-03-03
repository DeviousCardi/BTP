#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i++) {
        for(j=i;j<(n+1)/2;j++) {
            printf(" "); }
        for(k=n+1/2-i+1;k<=n+1/2;k++) {
            printf("%d",k); }
        printf("\n"); }
	return 0; }