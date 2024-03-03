#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<=2*n;i++) {
	        if(j==n-i||j==n+i)
	        printf("%c",'*');
	        else
	        printf("%c",' '); }
	    printf("\n");
	return 0; }