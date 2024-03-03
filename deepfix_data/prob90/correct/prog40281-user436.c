#include <stdio.h>
int main() {
    int k;
   int n;
   int d[1000];
   int p;
  scanf("%d%d",&k,&n);
  for(p=0;p<n;p++) {
      scanf("%d",&p); }
  int i,j;
  for(i=0;i<n;i++) {
      for(j=i+1;j<n;j++) {
          if(d[j]==k-d[i])
          {printf("lucky");}
          return 0; } }
  printf("unlucky");
    return 0; }