#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("\n%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	scanf("\n%d",&a[i]);
	int l;
	for(i=0;i<n;i++) {
	    if(a[i]=>a[i-1]&&a[i]=>a[i+1])
	    l=1;
	    else
	    l=0;}
	if(l==1)
	    printf("Yes");
	else
	printf("No");
	return 0; }