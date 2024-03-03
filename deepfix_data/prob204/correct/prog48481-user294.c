#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=1; i<=(n+1)/2; i++){
	   if(i==(n-(i-1)))
	    printf("Yes");
	  else
	      printf("No"); }
	return 0; }