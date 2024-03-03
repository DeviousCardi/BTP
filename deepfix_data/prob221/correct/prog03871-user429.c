#include <stdio.h>
#include <stdlib.h>
int main() {
       int i,j,p,n;
       scanf("%d",&n);
       for(i=1;i<=1;i++) {
           for(j=1;j<=2*n-1;j++)
           printf("*");
           printf("\n"); }
           for(i=2;i<=n-1;i++) {
                   for(j=1;j<=i-1;j++)
                   printf(" ");
               printf("*");
               for(p=1;p<=2*(n-i)-1;p++)
               printf(" ");
           printf("*");
           printf("\n"); }
       for(i=1;i<=n;i++) {
           for(j=1;j<=i-1;j++)
           printf(" "); }
       printf("*");
	return 0; }