#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int p,k=INT_MAX;
for(p=0;k>1;p++) {
    k=k/2; }
printf("%d",p);
int main() {
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