#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,s=0,k;
    scanf("%d",&n);
    for(j=n;j>=1;j=j-2) {
        for(k=0;k<s;k=k+1)
        printf("");
        for(i=j;i>=1;i=i-1) {
            printf("*"); }
        s=s+2
        printf("\n"); }
    for(j=3;j<=n;j=j+2) {
        for(i=j;i>=1;i=i-1) {
            printf("*"); }
        printf("\n"); }
	return 0; }