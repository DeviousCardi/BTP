#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,sum,i;
	scanf("%d",&n);
	sum=0;
	for(i=0;i<n;i++){
	    if((n%i)==0)
	    {sum=sum+i;} }
if(sum==n)
{printf("YES");}
else
{printf("NO");}
	return 0; }