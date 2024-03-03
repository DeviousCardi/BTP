#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,copy,rev=0;
	scanf("%d",&n);
	copy=n;
	while(copy>0) {
	    rev=rev*10+copy%10;
	    copy=copy/10; }
	if(rev==n)
	    printf("YES");
	else
	    printf("NO");
	return 0; }