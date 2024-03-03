#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,i;
	scanf("%d",&n);
	int sum=0;
	if (n==1)
	printf("YES");
	else
	{for(i=1;i<n;i++) {
	       if(n%i==0)
	       {sum=sum+i;} }
	    if (sum==n)
	printf("YES");
	else
	printf("NO"); }
	return 0; }