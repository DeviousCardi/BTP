#include <stdio.h>
#include <stdlib.h>
int main() {
	int sum,n,i;
	sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	      if(n%i==0)
	      {sum=sum+i;}
	  else continue; }
	  if( (sum+1)==n )
	  {printf("YES");}
	  else printf("NO");
	return 0; }