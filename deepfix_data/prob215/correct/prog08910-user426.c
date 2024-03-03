#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n,sum=0,i=0;
	scanf("%d",&n);
    for(i=0;i<n;i++){
	    sum=sum+1; }
	if(n==sum)
	printf("yes");
	else
	printf("no");
	return 0; }