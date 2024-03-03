#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main() {
	int k=INT_MAX;
if(k>(1000000000))
printf("done yo");
	int i,s=0,n;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++) {
	    if(n%i==0) {
	        s=s+i; } }
	if(s==n)
	printf("YES");
	else
	printf("NO");
	return 0; }