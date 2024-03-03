#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,n1,count=0;
	scanf("%d",&n);
	n1=n;
	for(i=2;i<n;i++) {
	    if(n1%i==0)
	    {n1=n1/i;
	    count=count+i+1;} }
	if(count==n)
	printf("YES");
	else printf("NO");
	return 0; }