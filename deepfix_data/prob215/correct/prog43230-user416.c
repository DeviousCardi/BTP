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
	  {  if (j<n)
	     sum=sum+j;
	     sum=n; }
	 if (j==2)
	 {printf("YES");}
	 else if (j==0)
	 {printf("NO");} }
	return 0; }