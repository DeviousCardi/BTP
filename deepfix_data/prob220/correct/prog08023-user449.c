#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=n-1;i++) {
	    for(j=(n-i);j>=1;j--)
	         printf(" ");
	   printf("*");
	   if(i>=2) {
	        for(k=1;k<=(2*(i-1)-1);k++)
	        {printf(" ");
	        }printf("*\n"); }
	   else if(i==1){printf("\n");continue;}
	   else
	   {printf("*\n");} }
	for(i=1;i<=(2*n-1);i++)
	printf("*");
	return 0; }