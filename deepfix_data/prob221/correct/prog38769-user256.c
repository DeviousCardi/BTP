#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=i;j<n;j++) {
            if(i<=j)
            printf("*");
            else
            printf(" "); }
        printf("\n"); }
	return 0; }