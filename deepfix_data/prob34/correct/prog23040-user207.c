#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	int a[20];
	scanf ("%d",&n);
	for (i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	int k;
	for (j=0;j<k;j++){
	  if(a[j]>a[j-1]&&a[j]>a[j+1]) {
	 printf ("Yes\n"); }
	  else {
	      printf ("No\n"); } }
	return 0; }