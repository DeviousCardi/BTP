#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,sp;
    scanf("%d",&n);
    printf("*\n");
    for(i=1;i<=n;i++) {
        printf("*");
        for(sp=1;sp<i;sp++)
        printf(" ");
        printf("*\n"); }
    for(j=1;j<n/2;j++)
    printf("*");
	return 0; }