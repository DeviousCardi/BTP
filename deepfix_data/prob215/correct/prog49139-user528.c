#include <stdio.h>
#include <stdlib.h>
int main() {
	long i,n,f=0;
	scanf("%l",&n);
	for(i=1;i<n;i++) {
	    if(n%i==0)
	    f+=i; }
	if(n==f)
	printf("YES");
	else
	printf("NO");
	return 0; }