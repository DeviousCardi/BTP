#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=5;i++) {
	  for(j=1;j<(6-i);j++)
	  printf(" ");
	  printf("*");
	  if(i==1)
	  printf("\n");
	  else {
	  for(k=1;k<i;k++)
	  printf(" ");
	  printf("* \n"); } }
	return 0; }