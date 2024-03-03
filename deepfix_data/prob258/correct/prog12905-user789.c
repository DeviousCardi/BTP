#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	for(i=1;i<n;i++) {
	   if(a[i]>a[i-1]&&a[i]>a[i+1])
	   break; }
	if(a[0]>=a[1]||a[n-1]<a[n])
	printf("Yes");
	else
	printf("No");
	return 0; }