#include <stdio.h>
#include <stdlib.h>
int total =0;
int cat(int n) {
    if(!n) return 1;
    else return cat(n-1)*(2*(2*n+1)/(n+2)); }
int main() {
    int t,i,k;
    scanf("%d",&t);
    for(i=0;i<18;++i)
    printf("%d\n",cat(i));
	return 0; }