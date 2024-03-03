#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++)
	scanf("%d",&s[i]);
	i=i+1;
	if((s[i]>s[i+1])&&(s[i]>s[i-1]))
	printf("yes");
	else
	printf("no");
	return 0; }