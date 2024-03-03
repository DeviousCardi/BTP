#include <stdio.h>
void change(int n,int a[],int d) {
  int i=1,j=1;
  int z;
  for(j=1;j<=d;j++) {
  for(i=n;i>=2;i=i-1) {
      z=a[i];
      if(i==n)
      a[i]=a[1];
      else
      a[i]=a[i+1];
      a[i+1]=z; } }
  for(i=1;i<=n;i++) {
        printf("%d ",a[i]); } }
int main() {
  int i,d,n,j,r;
  scanf("%d",&n);
  int a[n+2];
  for(i=1;i<=n;i++)
  scanf("%d",&a[i]);
  scanf("%d",&d);
  change(n,a,d);
    return 0; }