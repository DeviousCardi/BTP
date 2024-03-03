#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,count=0;
	for(i=1;i<n;i++) {
	if(n%i==0)
	  {count=count+i; }
	else
	  continue; }
	if(count==n)
	printf("YES");
	else
	printf("NO");
	return 0; }