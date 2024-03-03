#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1;
	scanf("%d",&n1);
	n=n1;
	int rev=0;
	while(n/10!=0){
	rev=(rev*10)+(n%10);
	n=n/10; }
	rev=(rev*10)+n;
	if(rev==n1)
	printf("YES");
	else printf("YES");
	return 0; }