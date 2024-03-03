#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[20],j;
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	 for(j=0;i<n;j++){
	   if((a[j])!=(a[n-j])){
	       break;
	     printf("NO"); }
	   else {
	      printf("YES"); } }
	return 0; }