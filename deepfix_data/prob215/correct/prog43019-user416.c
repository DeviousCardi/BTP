#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++) {
	    if(n%i==0)
	    j=i;
	    for (j=1;j<(n/2);j++)
	  {  if (j<n)
	     sum=sum+j; }
	 printf("%d",sum); }
	return 0; }