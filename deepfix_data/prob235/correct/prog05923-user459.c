#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,l;
    scanf("%d",&n);
    l=(n/2)+1;
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            if(j==l) {
            printf("%d",l%10); }
            else {
            printf(" "); }
            l--; }
        printf("\n"); }
	return 0; }