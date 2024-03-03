#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j;
    scanf("%d",&n);
    printf("*");
    for(i=0;i<n;i++) { {
        for(j=0;j<n-2-i;j++)
        printf(" "); }
    printf("*"); {
        for(j=0;j<i;j++)
        printf(" "); }
    printf("*"); }
	return 0; }