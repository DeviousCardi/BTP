#include <stdio.h>
#include <stdlib.h>
int main ()   {
    int n,i,j,s;
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i++)  {
      for(j=1;j<=5;j++)  {
         s=j;
if (s<i) {
    printf(" ");
    else {
        if ((5-i+j)%2!=0)
      printf("*");
      else
      printf("x";) }
      }  }
      printf("\n"); }
    return 0; }