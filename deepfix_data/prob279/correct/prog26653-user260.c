#include <stdio.h>
int main() {
  int n,i,j,ar[100];
  int flag,repeat,miss;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d",&ar[i]); }
  for(j=1;j<=n;j++) {
      flag=0;
      for(i=0;i<n;i++) {
          if(j==ar[i]) {
              flag++;
          if(flag==2)
          repeat=j; } }
      if(flag==0)
      miss=j; }
  printf("%d\n%d",repeat,miss);
    return 0; }