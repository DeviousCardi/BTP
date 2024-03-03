#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[n],j;
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	 for(j=0;i<n;j++){
	   if((a[j])==(a[n-j]))
	  printf("NO");
	  else
	  printf("YES"); }
	return 0; }