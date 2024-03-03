#include <stdio.h>
#include <stdlib.h>
int catalan(int n)
{   int a;
    if (n==0)
    return 1;
    else if (n==1)
    return 1;
    else
    {    a = (2(2*n-1))/(n+1)
        return a*catalan(n-1)*; } }
int main() {
	int i,t,n;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&n);
	    printf("%d",catalan(n)); }
	return 0; }