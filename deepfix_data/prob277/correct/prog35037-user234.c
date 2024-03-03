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
 for(i=1; i<n;i+=2)
 { for(j=n/2; j>=i; j--)
    printf(" ");
   for(k=i; k<=2*i+1; k++)
    printf("*");
   printf("\n"); }
	return 0; }