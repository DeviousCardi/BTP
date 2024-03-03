#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,l;
    scanf("%d",&n);
    l=(n/2)+1;
    for(i=1;i<=n;i++) {
        if(l<=n/2) l--;
        else l++;
        for(j=1;j<=i;j++) {
            if(j) {
            printf("%d",l); }
            else {
            printf(" "); } }
        printf("\n"); }
	return 0; }