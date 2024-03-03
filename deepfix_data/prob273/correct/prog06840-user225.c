#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,h,l,k,a;
    scanf("%d",&h);
    k=h/2;
    for(i=1;i<=k+1; i++) {
        for(j=k+1-i;j>=0;j--) {
            printf(" "); }
        for(l=k+1; l<=k+1;l--) {
            printf("%d",l); }
        printf("\n"); }
    	return 0; }