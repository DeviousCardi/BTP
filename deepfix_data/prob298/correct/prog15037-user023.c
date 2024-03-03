#include <stdio.h>
#include <stdlib.h>
int c(int n) {
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    else
    return ((c(n-1)*2*(2*n-1))/(n+1)); }
int main() {
    int i,k,j,t;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k); }
        for(j=0;j<17;j++) {
            if
            (k==c(j))
            printf("yes\n");
            if(k<c(j))
            continue;
            if(k>c(j))
            printf("no\n"); }
	return 0; }