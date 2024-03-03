#include <stdio.h>
void change(int n,int a[],int d) {
  int i=1;
  int z;
  for(i=n;i>=2;i=i-2) {
      z=a[i];
      if(i==n)
      a[i]=a[1];
      else
      a[i]=a[i+2];
      a[i+2]=z; }
  for(i=1;i<=n;i=i+2) {
        printf("%d ",a[i]); } }
int main() {
  int i,d,n,j,r;
  scanf("%d",&n);
  int a[2*n];
  for(i=1;i<=n;i++)
  scanf("%d",a[i]);
  scanf("%d",&d);
  change(n,a,d);
    return 0; }