#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[100];
	int i,j;
	int p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(j=0;j<n;j++) {
	    if(a[j]>a[j-1]&&a[j]>a[j+1])
	     p=1; }
	if(p==1)
	 printf("Yes");
	else
	 printf("No");
	return 0; }