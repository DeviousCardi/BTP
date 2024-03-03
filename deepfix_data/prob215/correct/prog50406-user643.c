#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,sum=0;
	for (i=1;i<n;i++){
	    if(n%i==0)
	    sum=sum+i;
	     scanf("%d",&sum); }
	if (n==sum)
	printf("Yes");
	else
	printf("No");
	return 0; }