#include <stdio.h>
#include <stdlib.h>
int c(int n) {
    if(n=0)
    return 1;
    if(n=1)
    return 1;
    else
    return ((c(n-1)*2*(2*n-1))/(n+1)); } }
int main() {
    int i,k,j,b,total;
    scanf("%d",&b);
    for(i=0;i<b;i++) {
        scanf("%d",&k);
        total=0;
        for(j=0;j<k;j++) {
            total=total+c(j); }
        printf("%d\n",total); }
	return 0; }