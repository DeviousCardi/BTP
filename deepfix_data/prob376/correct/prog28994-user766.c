#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return (4*n-2)*catalan(n-1)/(n+1); }
int main() {
int t,i,n;
scanf("%d",&t);
for(i=1;i<=t;i++) {
    scanf("%d",&n);
    printf("%d\n",catalan(n)); }
	return 0; }