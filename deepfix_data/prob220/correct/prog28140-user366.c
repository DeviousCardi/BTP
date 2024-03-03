#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,l;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    if(i==n) {
	        for(l=1;l<=(2*n-1);l++)
	printf("*"); }
	    else {
	  for(j=1;j<(n+1-i);j++)
	  printf(" ");
	  printf("*");
	  if(i==1)
	  printf("\n");
	  else {
	  for(k=1;k<=(2*i-3);k++)
	  printf(" ");
	  printf("* \n"); } } }
	return 0; }