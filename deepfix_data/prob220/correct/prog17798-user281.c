#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n-1;i++) {
	        for(k=1;k<=n+i;k++) {
	            if(k==n-i||k==n+i)
	            printf("%c",'*');
	            else
	            printf("%c",' '); }
	    printf("\n"); }
	    for(j=1;j<=2*n-1;j++)
	    printf("%c",'*');
	return 0; }