#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,sum=0,i;
	scanf("%d",&n);
    for(i=0;i<n;i++){
	    if(n%i==0)
	    sum=sum+i; }
	if(n==sum)
	printf("yes");
	else
	printf("no");
	return 0; }