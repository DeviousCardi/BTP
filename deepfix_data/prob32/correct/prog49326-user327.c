#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20],n,i,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	        scanf("%d",&a[i]); }
	for(i=1;i<n-1;i++) {
	        if(a[i]<a[i+1] && a[i]<a[i-1]) {
	                f=1;
	                break; } }
	if(f==1)
	    printf("Yes");
	else
	    printf("No");
	return 0; }