#include <stdio.h>
#include <stdlib.h>
int main() {
	int n=0,c=0,rn==0;
	scanf("%d",&n);
	c=n;
	while(n!=0) {
	    rn=rn*10+n%10;
	    n=n/10; }
	if(c==rn)
	printf("YES");
	else
	printf("NO");
	return 0; }