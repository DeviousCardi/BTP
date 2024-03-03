#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	count=0;
	scanf("%d",&n);
	for(i=0;i<=n;i=i+1){
	    if(n%i==0)
	    count=count+i; }
	if(count==n)
	printf("YES");
	else
	printf("NO");
	return 0; }