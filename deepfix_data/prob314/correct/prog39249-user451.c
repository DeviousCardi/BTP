#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,t,n;
	int a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d\n",&a[i]);
	scanf("%d",&t);
	for(i=0;i<t;i++)
	if(a[i] > a[i-1] && a[i] > a[i+1])
	printf("\nYes");
	else
	printf("\nNo");
	return 0; }