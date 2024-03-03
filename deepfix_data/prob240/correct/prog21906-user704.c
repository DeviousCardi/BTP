#include <stdio.h>
#include <stdlib.h>
long long int catalan(int n) {
    if(n==0)return 1;
    else return ((4*n-2)*catalan(n-1))/(n+1); }
int main() {
	int n,i,j;
	int k=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{   k=0;
	    scanf("%d\n",&j);
	    while(catalan(k)<j)
	    k++;
	    printf("%lld\n",catalan(k-1)); }
	return 0; }