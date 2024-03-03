#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[100];
	int i,j,n,p;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	scanf("%d\n",&a[i]);
	for(j=0;j<n;j++) {
	    if(a[j]==a[j+1])
	    i=1; }
	if(i==1)
	printf("%d",a[j]);
	return 0; }