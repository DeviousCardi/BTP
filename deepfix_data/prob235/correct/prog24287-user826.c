#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<(n+1)/2;i++) {
	    for(j=1;j<=(n+1)/2+i;j++) {
	        if (j<(n+1)/2 - i)
	        printf(" ");
	        else
	        printf("%d",j); } }
	return 0; }