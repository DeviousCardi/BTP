#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n,j;
scanf("%d",&n);
    for(i=1;i<=n;i++) {
         for(j=1;j<=(2*n-1);j++)
     {if(j<=i) {
         printf(" "); }
        else printf("*"); }
         printf("\n"); }
	return 0; }