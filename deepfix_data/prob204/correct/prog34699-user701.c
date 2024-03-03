#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,digit,n_new=0,sign=1;
	scanf("%d",&n);
	while(n) {
	    digit=n%10;
	    n_new=10*n_new+digit;
	    n=n/10;
	    printf(" %d",n_new); }
	if(n==n_new)
	printf("YES");
	else
	printf("NO");
	return 0; }