#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	int a[20];
	scanf ("%d",&n);
	for (i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for (j=0;j<k;j++){
	    scanf ("%d",&k);
	  int x=0;
	  if(a[x]>a[x-1] ) {
	  printf("Yes\n"); }
	  else {
	   printf("No\n"); }
	   x=0;
	  if (a[x]>a[x+1]){
	      printf("Yes\n"); }
	  else {
	      printf("No\n"); } }
	return 0; }