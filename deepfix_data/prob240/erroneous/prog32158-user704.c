#include <stdio.h>
#include <stdlib.h>
long long int catalan(int n)
{ int i,sum;
    if(n==0||n==1)return 1;
    else
      {for(i=0;i<=n-1;i++)
       sum+=catalan(n-1-i)*catalan(i);
       return sum; }
int main() {
	int n,i,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&j);
	    printf("%lld\n",catalan(j)); }
	return 0; }