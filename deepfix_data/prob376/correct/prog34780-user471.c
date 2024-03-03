#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n<=1)
    return 1;
    int i,sum=0;
    for(i=0;i<n;i++)
        sum+=catalan(i)*catalan(n-i-1);
        return sum; }
int main() {
    int t,i,k;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
        printf("%d\n",catalan(k)); }
	return 0; }