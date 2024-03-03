#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=(n/2)+1;i=i+1){
	    for(j=n;j>(n/2);j--)
	    printf("*");
	    printf("\n"); }
	return 0; }