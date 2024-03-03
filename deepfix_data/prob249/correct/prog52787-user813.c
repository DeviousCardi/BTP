#include <stdio.h>
#include <stdlib.h>
int main()
{ int i, j,k,n;
 scanf("%d", &n);
 for (i=1; i<=n; i++)
 {if(i<=(n+1)/2)
 {for(j=1; j<=(n+1)/2; j++)
 {if ((j==(n+1)/2)||(j==(n+1)/2-i+1))
   printf("*");
   else printf(" ");} }
   if(i>(n+1)/2)
   k=n+1-i;
   {for(j=1; j<=(n+1)/2; j++)
 {if ((j==(n+1)/2)||(j==(n+1)/2-k+1))
   printf("*");
   else printf(" ");} } }
 return 0; }