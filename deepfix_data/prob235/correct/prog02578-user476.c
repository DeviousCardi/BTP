#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n,num;
    scanf("%d",&n);
    for(i=0;i<(n+1)/2;i++) {
        for(j=0;j<(n-1)/2-i;j++) {
            printf(" "); }
        for(k=0;k<(2*i+1);k++) {
            num=(n+1)/2-i;
            printf("%d",num+1); }
        printf("\n"); }
	return 0; }