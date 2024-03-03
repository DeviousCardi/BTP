#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,k;
    scanf("%d",&n);
    for (k=1;k<=n;k++) {
    if (k==1||k==n)
    printf("*");
    if (k==2||k==n-1)
    printf("**");
    if (k!=1&&k!=2&&k!=n-1&&k!=n) {
    if (k<(n/2+1)) {
    printf("*"); {
    for (i=1;i<=k-2;i++)
    printf(" "); }
    printf("*"); }
	printf("\n"); }
    if (k>(n/2+1)) {
     printf("*"); {
    for (i=k;i>=1;i--)
    printf(" "); }
    printf("*"); }
	printf("\n"); }
    return 0; }