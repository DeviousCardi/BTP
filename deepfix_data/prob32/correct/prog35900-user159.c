#include <stdio.h>
#include <stdlib.h>
int main() {
  int i,n,k,x=0;
  char a[20];
  scanf("%d\n",&n);
  for (i=0;i<n;i++)
     scanf("%c",&a[i]);
   for(k=1;k<n-1;k++)
    {if(((a[k]<a[k-1]) && (a[k]<a[k+1])) || ((a[0]<a[1]) || (a[n]<a[n-1])))
 x=1;}
  if(x==1)
  printf("Yes");
  else  if(x==0)printf("No");
   return 0; }