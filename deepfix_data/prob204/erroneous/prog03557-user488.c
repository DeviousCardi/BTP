#include <stdio.h>
#include <stdlib.h>
int main() {
	int j,n;
	int count=0;
	int sum=0;
	scanf("%d",&n);
	for(j=n;j>0;j=j/10) {
	    j=n%10;
	    count=count+1
	    sum=sum+count*j; }
	if(sum==n)
	printf("yes");
	else
	printf("no");
	return 0; }