#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,rev=0,i,rem;
	scanf("%d",n);
	int dummy=n;
	while(n>0) {
	    rem=n%10;
	    rev=rev*10+rem;
	    n=n/10; }
	if(rev==dummy)
	    printf("YES");
	else
	    printf("NO");
	return 0; }