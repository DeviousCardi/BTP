#include <stdio.h>
int main() {
  int max=0,sum=0,n,m,i,a,j;
  scanf("%d %d\n",&n,&m);
  for(i=1;i<=n;i++){
      sum=0;
      for(j=1;j<=m;j++){
      scanf("%d",&a);
          sum=sum+a; }
      if(sum>max)
      max=sum; }
  printf("%d",max);
  return 0; }