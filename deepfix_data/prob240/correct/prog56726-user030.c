#include <stdio.h>
#include <stdlib.h>
int sum=0;
int cat(int n) {
    if(n==0)
        return 1;
    else
        return (2*(2*n-1)*cat(n-1))/(n+1) ; }
int main() {
    int t,i,j,k;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++) {
        scanf("%d\n",&k);
        j=0;
        while(cat(j)<k) {
            j++; }
        printf("%d\n",cat(j-1)); }
	return 0; }