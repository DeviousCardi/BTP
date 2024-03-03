#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,x,i,a[20],j;
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=0;i<n;i++){
	  	scanf("%d",&a[i]); }
	 for(j=1;j<n;j++){
	  if(a[j]==x&&a[j+1]==x)
	    printf("%d",x); }
	return 0; }