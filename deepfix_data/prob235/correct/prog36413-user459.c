#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,l;
    scanf("%d",&n);
    l=(n/2)+1;
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            if(j==l) {
            printf("%d",j); }
            else {
            printf(" "); } }
        printf("\n");
        if(l<=n/2) l--;
        else l++; }
	return 0; }