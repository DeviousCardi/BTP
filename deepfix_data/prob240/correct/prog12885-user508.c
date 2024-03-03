#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0) return 1;
    return ((catalan(n-1))*(4*n+2))/(n+2); }
int main() {
	int n,i,j=0,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{scanf("%d",&k);
	while(catalan(j)<k)
	j++;
	printf("%d\n",catalan(j));
	j=0;}
	return 0; }