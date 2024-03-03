#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 1;
    else
    return ((4*n+2)*cat(n-1))/(n+2); }
int main() {
    int n,k,i;
    scanf("%d/n",&n);
    for(i=0;i<n;i++) {
        scanf("%d\n",&k);
        printf("%d\n",cat(k)); }
	return 0; }