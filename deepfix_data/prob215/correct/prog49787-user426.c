#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,sum=0,i=0;
	scanf("%d",&n);
    for(i=0;i<n;i++){
	    if(0==(n%i)){
	    sum=sum+i; }
	    else
	    sum=sum; }
	if(n==sum)
	printf("yes");
	else
	printf("no");
	return 0; }