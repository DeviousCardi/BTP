#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,h,l,k,a;
    scanf("%d",&h);
    k=h/2;
    for(i=1;i<=k+1; i++) {
        for(j=k+1-i;j>1;j--) {
            printf(" "); }
        for(l=k+2-i; l<=k+1;l--) {
            printf("%d",l); }
        printf("\n"); }
    	return 0; }