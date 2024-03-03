#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int c[n];
  for(int i=0;i<n;i++)
  scanf("%d",&c[i]);
  int rot;
  scanf("%d",&rot);
  for(int i=0;i<rot;i++) {
      int k,p=c[0];
      c[0]=c[n-1];
      for(int i=0;i<n-1;i++) {
          k=c[i+1];
          c[i+1]=p;
          p=k; } }
  for(int i=0;i<n;i++)
  printf("%d ",c[i]);
    return 0; }