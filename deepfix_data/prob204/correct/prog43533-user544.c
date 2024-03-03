#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[20],j;
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	   for(j=1;j<n;j++){
	   if(a[j]=a[j-n]){
	     printf("Yes"); }
	    else {
	      printf("No"); } }
	return 0; }