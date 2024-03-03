#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int sum=0;
	if (n==1)
	printf("YES");
	else
	{for(i=1;i<n;i++) {
	       if(n%i==0)
	       {sum=sum+i;} }
	    if (sum==n)
	printf("YES"); }
	return 0; }