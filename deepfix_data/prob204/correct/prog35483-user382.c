#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,copy,rev=0,dig;
	scanf("%d",&n);
	copy=n;
	while(copy>0) {
	    dig=copy%10;
	    rev=rev*10+dig;
	    copy=copy/10; }
	if(rev==n)
	    printf("YES");
	else
	    printf("NO");
	return 0; }