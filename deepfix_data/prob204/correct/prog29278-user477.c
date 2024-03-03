#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a,b=0,c;
	scanf("%d",&n);
	c=n;
	while(n>0) {
	    a=n%10;
	    n=n/10;
	    b=(10*b)+a; }
	if(b==c)
	    printf("YES");
	else
	    printf("NO");
	return 0; }