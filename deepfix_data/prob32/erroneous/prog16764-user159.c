#include <stdio.h>
#include <stdlib.h>
int main() {
  int a[20],i,n,k;
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {scanf("%d",&a[i]);
   for(k=0;k<n;k++)
   { (a[k-1]<a[k]) && (a[k]<a[k+1]) }
     printf("Yes");
   return 0; }