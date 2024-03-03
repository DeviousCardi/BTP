#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[n],i,p;
	p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    if(a[i]>a[i-1]&&a[i]>a[i+1])
	    p=1; }
	if(p==1)
	 printf("Yes");
	else
	 printf("No");
	return 0; }