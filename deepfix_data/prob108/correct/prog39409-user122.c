#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	   for(b=2;b<i-1;++b)
	   for(j=1;j<=i;++j)
	     printf("*"); }
	return 0; }