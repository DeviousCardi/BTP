#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,l,n;
	scanf("%d",&n);
	l=(n+1)/2;
	for(i=0;i<l;i++)
	    {for(j=0;j<=l;j++) {
	            if(j==l)
	            printf("*");
	            else
	           printf(" ");
	           if(j==(l-i))
	            printf("*"); }
	        printf("\n"); }
  return 0; }