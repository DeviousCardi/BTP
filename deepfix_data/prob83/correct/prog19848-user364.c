#include <stdio.h>
int pattern(int a[],int n,int k)
{int i;
    for(i=n-k;i<n;i++) {
        printf("%d ",a[i]); }
    for(i=0;i<n-k;i++) {
        printf("%d",a[i]); }
    return 0; }
int main() {
  int n,i,k,d;
  int a[100];
  int pattern(int a[],int n,int k);
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d ",&a[i]); }
  scanf("%d",&k);
d=pattern(a[100],n,k);
    return 0; }