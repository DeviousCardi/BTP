#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i++) {
        for(j=i;j<(n+1)/2;j++) {
            printf(" "); }
        for(k=0;k<=i;k++) {
            printf("%d",n+1/2); }
        printf("\n"); }
	return 0; }