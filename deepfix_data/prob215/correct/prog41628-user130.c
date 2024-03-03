#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;int i;int term=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{if(n%i==0)
	term=term+i;}
	if(term==n)
	printf("Yes");
	else
	printf("No");
	return 0; }