#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,j,k;
	scanf("%d",&n);
	for (j=n;j>=1;j=j-2){
	    for(k=1;k<=n;k=k+2)
	    printf("*");
	 printf("%d",k%10);
	 printf("\n"); }
	return 0; }