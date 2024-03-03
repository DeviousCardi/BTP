#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=0;
    if(n==0)
    return 1;
    else if(n>0)
    for(i=1;i<=n;i++) {
        sum+=catalan(i)*catalan(n-1-i); }
    return sum; }
int main() {
    int i,t,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        for(j=0;j<50;j++) {
            if(catalan(j)>k)
            printf("%d",catalan(j-1)); } }
	return 0; }