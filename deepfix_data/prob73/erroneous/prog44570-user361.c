#include <stdio.h>
int main() {
  int max=0,sum=0,n,m,i,j;
  scanf("%d %d\n",&n,&m);
  for(i=1;i<=n;i++){
      for(j=1;j<=m;j++){
      scanf("%d \n",&j);} }
  for(i=1;i<=n;i++){
      for(j=1;j<=m;j++) {
          sum=sum+j; }
      if(max>sum){
          printf("%d"max);
         else{
             printf("%d",sum); } } } }
    return 0; }