#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;i++)   {
	    for(k=0;k<=i-1;k++)  {
	        printf(" "); }
	    for(j=1;j<(2*i-1);j=j+2)  {
	        printf("%d",n); }
	    printf("\n"); }
	return 0; }