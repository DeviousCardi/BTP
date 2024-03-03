#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,t,n;
	int a[20];
	scanf("%d",&n);
	for(i=1;i<n;i++)
	scanf("%d",&a[i]);
	if(a[i] > a[i-1] && a[i] > a[i+1])
	printf("Yes");
	else
	printf("No");
	return 0; }