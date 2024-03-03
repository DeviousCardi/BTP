#include <stdio.h>
#include <stdlib.h>
long catl(int n) {
    if(n==0)
    return 1;
    n=n-1;
    return (catl(n)*((2*(2n+1))/(n+2)); }
int main() {
	int t,i;
	int k;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        printf("%ld\n",catl(k)); }
	return 0; }