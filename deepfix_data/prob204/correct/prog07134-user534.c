#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a,b,temp;
	scanf("%d",&n);
	temp=n;
	while (n!=0) {
	    a=n%10;
	    n=n/10;
	    b=10*b+a; }
	printf("%d",b);
	if (b==temp)
	printf("YES");
	else printf("NO");
	return 0; }