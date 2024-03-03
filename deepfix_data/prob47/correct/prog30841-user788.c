#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    else
    return ((4*n-2)*cat(n-1))/(n+1); }
int main() {
    int n,k,i,j,sum=0;
    scanf("%d/n",&n);
    for(i=0;i<n;i++) {
        scanf("%d\n",&k);
        for(j=0;j<k;j++)
        printf("%d\n",cat(j)); }
	return 0; }