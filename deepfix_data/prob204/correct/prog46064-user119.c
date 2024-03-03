#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,r=0,m;
	scanf("%d",&n);
	m=n;
	while(n!=0) {
	    r=r*10;
	    r=r+n%10;
	    n=n/10; }
	if(r==m)
	printf("YES");
	else
	printf("NO");
	return 0; }