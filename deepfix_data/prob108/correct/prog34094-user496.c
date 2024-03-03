#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,k;
    scanf("%d",&n);
    for (k=1;k<=n;k++) {
    if (k==1||k==n) printf("*");
    else {
    printf("*"); {
    for (i=1;i<=n-2;i++)
    printf(" "); }
    printf("*"); }
	printf("\n"); }
	return 0; }