#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,temp,sum=0;
	scanf("%d",&n);
	temp=n;
	while(temp!=0) {
	    m=temp%10;
	    sum=sum*10+m;
	    temp=temp/10; }
	if(sum==n)
	printf("YES");
	else
	printf("NO");
	return 0; }