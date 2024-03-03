#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,sum=0,temp;
	scanf("%d",&n);
	int n1=n;
	while(n1!=0) {
	    temp=n1%10;
	    sum=sum*10+temp;
	    n1=n1/10; }
	if(sum==n)
	printf("YES");
	else
	printf("NO");
	return 0; }