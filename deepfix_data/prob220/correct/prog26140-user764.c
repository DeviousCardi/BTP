#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1){
	    for(j=1;j<2*i-1;j=j+1){
	  if((j!=1)||(j!=2*i-1)){
	      printf(" "); }
	  else {printf("*");}}
	  printf("\n"); }
	return 0; }