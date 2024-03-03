#include <stdio.h>
#include <stdlib.h>
int sum=0;int k;int a[17];
int catalan(int n)
{ if(n==0)
return 1;
return((2*(2*n-1)/(n+1))*catalan(n-1)); }
int main() {int i;
    for(i=0;i<2;i++) {
        a[i]=catalan(i); }
    for(i=0;i<17;i++)
    {printf("%d ",a[i]); }
	return 0; }