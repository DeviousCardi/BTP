#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,h,i,j,k;
	scanf("%d",&h);
	scanf("%d",&n);
	for (i=1;i<=h;i++){
	    k=i;
	    for(j=1;j<i;j++)
	        printf(" ");
	        for(j=1;j<=n+2-(2*i);j++)
	        printf("%d",k%10);
	        printf("\n"); }
	return 0; }