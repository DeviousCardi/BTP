#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,j,i,k,m=n;
    scanf("%d",&n);
    j=1;
    for(k=1;k<=n;k++) {
    for(i=1;i<=n-j;i++) {
        printf(" "); }
    if(i==n-j+1&&i==n+j-1)
    printf("*"); }
    printf("\n");
    j++;
	return 0; }