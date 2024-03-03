#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,l;
	scanf("%d",&l);
	for(i=0;i<l;i++)
	    {for(j=0;j<=i;j++) {
	            if(j==l)
	            printf("*");
	            else if(j=(l-i))
	           printf("*");
	            else
	           printf(" "); }
	        printf("\n"); }
  return 0; }