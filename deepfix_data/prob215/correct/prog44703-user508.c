#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int n;int i,j,c=0;
	scanf("%lld",&n);
	for(i=1;i<=n/2;i++)
	if(n%i==0)c=c+i;
	if(c==n)printf("YES");
	else printf("NO");
	return 0; }