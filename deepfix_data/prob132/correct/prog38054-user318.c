#include <stdio.h>
int main() {
  int n,k=0,c;
  scanf("%d",&n);
  int a[n];
  char b[n];
  for(int j=0;j<n;j++)
  scanf("%d%c",&a[j],&b[j]);
  for(int j=0;j<n;j++) {
      c=0;
      for(int i=0;i<n;i++)
      if(a[j]==a[i])
      c=c+1;
      if(c==a[j])k=k+1; }
  if(k==n)printf("Yes");
  else printf("No");
    return 0; }