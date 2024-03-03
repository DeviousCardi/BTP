#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[20],j=1;
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	   while(j<n)
	   if((a[i])==(a[j+i]))
	  printf("YES");
	  else
	  printf("NO");
	return 0; }