#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int i;
	int count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1){
	    if(n%i==0)
	    count=count+i; }
	if(count==n)
	printf("YES");
	else
	printf("NO");
	return 0; }