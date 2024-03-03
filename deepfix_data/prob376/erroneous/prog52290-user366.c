#include <stdio.h>
#include <stdlib.h>
int catln(int n) {
    if(n==0)
    return 1;
    return(catln(n-1)*2*(2*n-1))/(n+1)); }
int main() {
    int i,j,k;
    scanf("%d",&i);
    for(j=0;j<i;j++) {
        scanf("%d",&k)
        printf("%d\n",catln(k)); }
	return 0; }