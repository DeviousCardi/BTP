#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int rev=0;
	while(n/10!=0){
	rev=rev*10+n%10;
	n=n/10; }
	if(rev==n)
	printf("rev");
	else printf("rev");
	return 0; }