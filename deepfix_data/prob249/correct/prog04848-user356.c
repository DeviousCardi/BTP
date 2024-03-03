#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,l;
	scanf("%d",&l);
	for(i=0;i<l;i++)
	    {for(j=0;j<=l;j++) {
	            if(j==l)
	            printf("*");
	            else
	           printf(" "); }
	        printf("\n"); }
  return 0; }