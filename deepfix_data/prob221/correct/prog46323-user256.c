#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(k=0;k<i-1;k++) {
            printf(" "); }
        for(j=i;j<=n;j++) {
           if(j==i)
            printf("*");
            else
            printf(" "); }
        printf("\n"); }
	return 0; }