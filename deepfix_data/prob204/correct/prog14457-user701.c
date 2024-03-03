#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,digit,n_new=0,sign=1;
	scanf("%d",&n);
	m=n;
	while(n) {
	    digit=n%10;
	    n_new=10*n_new+digit;
	    n=n/10; }
	if(m==n_new)
	printf("YES");
	else
	printf("NO");
	return 0; }