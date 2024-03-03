#include <stdio.h>
#include <stdlib.h>
int main() {
   int i,j,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {for(j=1;j<=n;j++)
    if((i<=(n+1)/2)&&(j<(n+1)/2-i+1))
   printf(" "); {
       if((i<=(n+1)/2)&&(j<(n+1)/2-i+1))
   printf(" ");
   else
   printf("%d",j); }
   {if((i>(n+1)/2)&&(j<i-(n+1)/2+1))
   printf(" ");
   else
   printf("%d",j); }
   printf("\n"); }
   return 0; }