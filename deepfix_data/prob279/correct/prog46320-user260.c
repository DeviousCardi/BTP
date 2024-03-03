#include <stdio.h>
int main() {
  int n,i,j,ar[100000];
  int flag=0;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d",&ar[i]); }
  for(j=1;j<=n;j++) {
      flag=0;
      for(i=0;i<n;i++) {
          if(j==ar[i]) {
              flag++;
          if(flag==2)
          printf("%d\n",ar[i]); } }
      if(flag==0)
      printf("%d\n",j); }
    return 0; }