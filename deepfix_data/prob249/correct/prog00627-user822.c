#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n%2;i++) {
        for(j=i;j<=n%2;j++) {
            if(j==n%2) {
                printf("*"); }
            else {
            printf(" "); } }
        printf("\n"); }
	return 0; }