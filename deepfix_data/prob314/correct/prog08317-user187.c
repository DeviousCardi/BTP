#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t,a[20],i,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	        scanf("%d",&a[i]); }
	 scanf("%d",&t);
	for(j=0;j<5;j++) {
	      scanf("%d",&s);
	      if(a[s]<a[s-1]&&a[s]<a[s+1])
	      printf("\nYes");
	      else
	      printf("\nNo"); }
	return 0; }