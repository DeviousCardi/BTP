#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	long int n,sum=0,i=0;
	scanf("%ld",&n);
    for(i=0;i<n;i++){
	    if(n%i==0)
	    sum=sum+i;
	    else
	    continue; }
	if(n==sum)
	printf("yes");
	else
	printf("no");
	return 0; }