#include <stdio.h>
#include <stdlib.h>
int main ()   {
    int n,i,j,s;
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i++)  {
      for(j=0;j<=i;j++)  {
         s=j;
if (s%2!=0)
printf("*");
else
printf("x"); }
      printf("\n"); }
    return 0; }