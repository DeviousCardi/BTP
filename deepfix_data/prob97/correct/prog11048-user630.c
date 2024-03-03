#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k,l,n;
    scanf("%d",&h);
    n=h;
    for(i=1;i<=n;i++) {
            for(j=1;j<=n;j++)
            printf(" ");
            for(k=1;k<h;k++) {
            for(l=1;l<=i;l++)
            printf("%d",i); }
            printf("\n");
        n=n-1; }
	return 0; }