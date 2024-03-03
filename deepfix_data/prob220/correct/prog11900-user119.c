#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++) {
 for(j=1;j<=2*n-1;j++) {
     if(j=n+1-i)
     printf("*");
     else printf(" "); } }
	return 0; }