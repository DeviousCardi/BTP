#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,sp;
    scanf("%d",&n);
    for(i=1;i<=(n/2)+1;i++) {
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n"); }
        for(sp=1;sp<i;sp++)
        printf(" ");
        printf("*\n");
        for(i=1;i<n/2;i++) {
            for(sp=1;sp<i;sp++)
        printf(" ");
        printf("*\n");
            for(j=i;j<n/2;j++)
            printf("*");
            printf("\n"); }
	return 0; }