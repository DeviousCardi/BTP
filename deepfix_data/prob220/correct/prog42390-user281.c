#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	        for(k=0;k<=n+i;k++) {
	            if(k==n-i||k==n+i)
	            printf("%c",'*');
	            else
	            printf("%c",' '); }
	    printf("\n"); }
	    for(j=1;j<=2*n;j++)
	    printf("%c",'*');
	return 0; }