#include <stdio.h>
#include <stdlib.h>
int catalan(int n ){
int k=n-1;
    if (n==2)
    return (n+2)/2;
    else
    return catalan(n-1)*(n+k)/k; }
int main() {
    int i,t,j,sum=0,n;
    scanf("%d",&t);
	printf("%d",catalan(7));
	return 0; }