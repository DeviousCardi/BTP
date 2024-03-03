#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)  {
	    if(i==1 || i==n) {
	        printf("*");
	    }   else  {
	    for(j=1;j<=2;j++)  {
	        printf("*"); }
	    }   printf("\n"); }
	return 0; }