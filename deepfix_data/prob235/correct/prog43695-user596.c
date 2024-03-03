#include <stdio.h>
#include <stdlib.h>
int main() {
       int n,i,k,j;
       scanf("%d",&n);
       for(i=1;i<=n;i++) {
           for(j=n-i;j>=1;j--)
           printf(" ");
           for(k=n-i+1;k<=n+i-1;k++)
           printf("%d",k%10); }
           printf("\n"); {
          for(k=i;k<=2*n-i;k++)
          if(k<9)
          printf("%d",k);
          else
          printf("%d",k%10);
          printf("\n"); }
       return 0; }