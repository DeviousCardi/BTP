#include <stdio.h>
#include <stdlib.h>
int main() {
 int i,j,k,n;
 scanf("%d",&n);
 for(i=1; i<=n; i+=2)
 { for(j=i; j>=1; j-=2)
    printf(" ");
   for(k=n; k>=i; k--)
    printf("*");
   printf("\n"); }
 for(i=1; i<n; i+=2)
 { for(j=1; j<=n/2; j--)
    printf(" ");
   for(k=3; k<=n; k=k+2)
    printf("*");
   printf("\n"); }
	return 0; }