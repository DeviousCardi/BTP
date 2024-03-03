#include <stdio.h>
#include <stdlib.h>
long long int catalan(int n) {
    if(n==0||n==1)return 1;
    else return ((4*n-2)/n+1)*catalan(n-1); }
int main() {
	int n,i,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&j);
	    printf("%lld\n",catalan(j)); }
	return 0; }