#include <stdio.h>
#include <stdlib.h>
int fibo(int n)
{   if(n==2)
    return 1;
    if (n==1)
    return 0;
    return ( fibo(n-1)+fibo(n-2)); }
int main() {
	int t,i,k,ans;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    ans=fibo(k);
	    printf("%d",ans); }
	return 0; }