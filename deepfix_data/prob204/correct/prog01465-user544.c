#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[20],j=1;
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	   if((a[i])==(a[i+1]))
	  printf("YES");
	  else
	  printf("NO");
	return 0; }