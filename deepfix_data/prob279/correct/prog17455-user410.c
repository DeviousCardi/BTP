#include <stdio.h>
int main() {
    int n,i,j,count,rep,mis;
    scanf("%d",&n);
  int a[n];
  for(i=1;i<=n;i++) {
      count=0;
      for(j=0;j<n;j++) {
          if(a[j]==i)
          count++;
          else
          mis=i; }
      if(count==2)
          rep=i; }
  printf("%d\n%d",rep,mis);
    return 0; }