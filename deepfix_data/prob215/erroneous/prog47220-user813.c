#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,n1,n2,count=0;
	scanf("%d",&n);
	n1=n
	for(i=2;i<n;i++) {
	    if(n1%i==0)
	    n1=n/i;
	    count=count+i; }
	if(count==n)
	printf("YES");
	else printf("NO");
	return 0; }