#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int a[20];
	scanf ("%d",&n);
	for (i=0;i<n;i++){
	    scanf("%d",&a[i]);
	  if(a[i]>a[i-1]&&a[i]>a[i+1]) {
	   j=1; }
	  else {
	      j=0 } }
	if (j==1){
	    printf ("Yes"); }
	  else {
	      printf ("No"); } }
	return 0; }