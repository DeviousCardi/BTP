#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%f",&n);
	int i;
	int s=0;
	for(i=1;i<=n/2;i++) {
	    if(n%i==0)
	    s=s+i; }
	if(n==s)
	printf("YES");
	else
	printf("NO");
	return 0; }