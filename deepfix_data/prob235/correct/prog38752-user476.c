#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<(n+1)/2;i++) {
        for(j=0;j<(n-1)/2-i;j++) {
            printf(" "); }
        for(k=0;k<(2*i+1);k++) {
            printf("%d",(n+1)/2-i); }
        printf("/n"); }
	return 0; }