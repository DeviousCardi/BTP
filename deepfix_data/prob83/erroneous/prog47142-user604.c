#include <stdio.h>
int rot(int i,int d,int n,int a[]);
int main() {
  int n,a[100],i,d,j;
  scanf("%d ",&n);
  for(i=0;i<n;i++)
  scanf("%d ",&a[i]);
  scanf("%d",&d);
  for(i=1;i<=d;i++)
  printf("%d ",rot(i,d,n,a[]));
  for(i=0;i<(n-d);i++)
  printf("%d ",a[i]);
    return 0; }
  int rot(int i,int d,int n,int a[])
  {int j;
  j=(n-d-1+i);
  return a[j]; }