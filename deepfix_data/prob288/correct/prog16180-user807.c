#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
 for(i=1;i<=((2*n+1)/2)+1;i++) {
    for(k=n;k>0;k--)
    {printf(" ");}
     for(j=1;j<=((2*n+1)/2)+1;j++) {
      if((i+j)%2==0)
       {printf("x");}
       else
      {printf("*");}
   printf("\n"); } }
return 0; }