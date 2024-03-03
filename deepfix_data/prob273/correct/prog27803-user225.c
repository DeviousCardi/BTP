#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,h,l,k,a;
    scanf("%d",&h);
    k=(h-1)/2;
    for(i=1;i<=k+1; i++) {
        for(j=k;j>=0;j--) {
            printf(" "); }
        for(l=k+1; l>=1;l--) {
            printf("%d",l); } }
    	return 0; }