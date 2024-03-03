#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=4;i++) {
	  for(j=1;j<(5-i);j++)
	  printf(" ");
	  printf("*");
	  if(i==1)
	  printf("\n");
	  else {
	  for(k=1;k<=(2*i-3);k++)
	  printf(" ");
	  printf("* \n"); } }
	return 0; }