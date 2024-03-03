#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++) {
        for(j=1;j<=n+1;j++) {
            if(i+j>=n+2||j==5) {
                printf("%d",i+j); }
            else {
                printf(" "); } }
        printf("\n"); }
	return 0; }