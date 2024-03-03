#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,n1,count=0;
	scanf("%d",&n);
	for(i=2;i<n;i++) {
	    n1=n;
	    if(n1%i==0)
	    {n1=n1/i;
	    count=count+i;} }
	if(count==n)
	printf("YES");
	else printf("NO");
	return 0; }