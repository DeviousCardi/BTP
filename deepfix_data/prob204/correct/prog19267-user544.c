#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[20],j=1;
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	   for(i=0;i<n;i++){
	   if(a[i]==a[(i+j)]){
	     printf("Yes");
	      j++; }
	   else {
	      printf("No"); } }
	return 0; }