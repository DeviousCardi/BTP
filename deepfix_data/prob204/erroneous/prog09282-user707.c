#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,b,r,count=0;int rev[]
	scanf("%d",&n);
	for(i=0;n>0;i++) {
	    b=n%10;
	    n=n/10;
	    rev[i]=b;
	    count=count+1; }
	 for(j=0;j<count;j++) {
	  r=r+power(10,j)*rev[i]; }
	if(n==r)
	printf("YES");
	else
	printf("NO");
	return 0; }