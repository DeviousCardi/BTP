#include <stdio.h>
#include <stdlib.h>
int main() {
	   int i,j,n;
	   scanf("%d",&n);
	   for(i=1;i<=(n+1)/2;i=i+1){
	       for (j=1;j<=2*n-1;j=j+1);{
	           printf("*",j); }
            printf("\n"); }
	return 0; }