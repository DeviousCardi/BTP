#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,blank;
	scanf("%d",&n);
	for (i=n;i>=1;i--){
	    for(blank=0;blank<(n-i);blank++)
	      printf(" ");
	    for (j=i;j<=(2*i-1);j++)
	      printf("*");
	    for (j=0;j<i-1;j++)
	      printf("* ");
	printf("\n"); }
	return 0; }