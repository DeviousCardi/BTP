#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int p,i,sum;
	p=n;
	sum=0;
	for(i=1;i<=(n/2);i++) {
	    if(n%i==0)
	    sum=sum+i;
	    else
	    continue; }
	if(p==sum)
	printf("YES");
	else
	printf("NO");
	return 0; }