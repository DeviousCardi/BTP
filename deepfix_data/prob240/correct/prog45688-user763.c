#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=0;
    if(n==0)
    return 1;
    else if(n>0)
    for(i=0;i<n;i++) {
        sum=sum+catalan(i)*catalan(n-1-i); }
    return sum; }
int main() {
    int i,t,j,k;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
        for(j=1;j<50;j++) {
            if(catalan(j)>k) {
            printf("%d\n",catalan(j-1));
            break; } } }
	return 0; }