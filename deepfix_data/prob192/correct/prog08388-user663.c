#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for (i=1;i<=(n/2+1);i++) {
	        for (j=1;j<(n/2+i+1);j++)
	        if (j<=(n/2+1-i))
	        printf(" ");
	        else
	        printf("*");
	            printf("\n"); }
    for (i=(n/2+2);i<=n;i++) {
	        for (j=1;j<=(i-1)-i;j++)
	        if (j<i)
	        printf(" ");
	        else
	        printf("*");
	            printf("\n"); }
	return 0; }