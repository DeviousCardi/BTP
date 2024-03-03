#include <stdio.h>
#include <stdlib.h>
int main() {
  int a[20],i,n,k,x;
  scanf("%d",&n);
  for (i=0;i<n;i++)
  scanf("%d",&a[i]);
   for(k=1;k<n-1;k++)
   { if((a[k-1]<a[k]) && (a[k]<a[k+1]))
     { x=1;}
    if(a[0]<a[1] || a[n]<a[n-1])
    { x=1;} }
  if(x==1)
  printf("Yes");
  else printf("No");
   return 0; }