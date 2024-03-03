#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<(n+1)/2;i++) {
	    for(j=1;j<=(n+1)/2+i;j++)
	    {  j=j%10;
	        if (j<(n+1)/2 - i)
	        printf(" ");
	        else
	        printf("%d",j); }
	    printf("\n"); }
	for(i=1;i<(n+1)/2;i++) {
	    for(j=1;j<=(n+1)/2+i;j++) {
	        if (j<=i)
	        printf(" ");
	        else
	        printf("%d",j); }
	    printf("\n"); }
	return 0; }