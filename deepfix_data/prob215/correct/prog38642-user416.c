#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++) {
	    if(n%i==0)
	    printf("%d\n",i);
	    j=i;
	    for (j=1;j<n;j++)
	  {  if (j<n &&j>0)
	     sum=sum+j;
	    if (sum=n)
	    j=1;
	    else
	    j=0; }
	 if (j==1)
	 printf("YES");
	 else if (j==0)
	 printf("NO"); }
	return 0; }