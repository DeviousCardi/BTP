#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++) {
 for(j=1;j<=2*n-1;j++) {
     if(i==n)
     printf("*"); }
 if(i!=n)
 for(j=1;j<=n+i-1;j++) {
 if((j==n+1-i) || (j==n+i-1))
     printf("*");
    else printf("a"); }
 printf("\n"); }
	return 0; }