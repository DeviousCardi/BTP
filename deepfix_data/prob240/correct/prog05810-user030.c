#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==1||n==0)
    return 1;
    else
    return (2*(2*n-1)*(cat(n-1)))/(n+1); }
int main() {
    int t,i,k;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++) {
        scanf("%d\n",&k);
        printf("%d\n",cat(k)); }
	return 0; }