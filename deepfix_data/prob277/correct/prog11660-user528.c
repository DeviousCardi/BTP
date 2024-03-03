#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	j=n;
	for(i=0;i<n;i++) {
	 while(j<=n) {
	  if(i<(n/2+2)) {
	     if(j<i)
	      printf(" ");
	     else
	      printf("*");
	     j--; }
	  else
	  {  if(j<(n-i))
	      printf(" ");
	     else
	      printf("*");
	     j++; } } }
	return 0; }