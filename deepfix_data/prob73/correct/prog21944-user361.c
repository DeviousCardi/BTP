#include <stdio.h>
int main() {
  int sum,n,m,i,j;
  scanf("%d%d\n",&n,&m);
  for(i=1;i<=n;i++){
      for(j=1;j<=m;j++){
      scanf("%d",&j);} }
  for(i=1;i<=n;i++){
      for(j=1;j<=m;j++) {
          sum=sum+j; }
      printf("%d",sum); }
    return 0; }