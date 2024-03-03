#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n%2+1;i++) {
        for(j=i;j<=n%2+1;j++) {
            printf("%d",n%2+1); }
        printf("\n"); }
	return 0; }