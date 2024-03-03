#include <stdio.h>
int main() {
    int k;
   int n;
   int d[n];
  scanf("%d%d%d",&k,&n,&d[n]);
  int i,j;
  for(i=0;i<=n;i++) {
      for(j=i+1;j<=10;j++) {
          if(d[j]==k-d[i])
          {printf("lucky");}
          return 0; } }
  printf("unlucky");
    return 0; }