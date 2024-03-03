#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	if(n==1)
	printf("0");
	else{
	    if(a[i]>a[i-1] && a[i]>a[i+1])
	    printf("%d",i); }
	return 0; }