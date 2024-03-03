#include <stdio.h>
int main() {
  int n,m,i,j,k,l,sum,max=0;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++) {
      sum=0;
      for(j=0;j<m;j++) {
        l= scanf("%d",&k);
         sum=sum+l; }
      if(max<sum)
      max=sum; }
   printf("%d",max);
    return (0); }