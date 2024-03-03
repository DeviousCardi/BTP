#include <stdio.h>
int pattern(int a[],int n,int k)
{int i;
    for(i=n-k-1;i<n;i++) {
        printf("%d",a[i]); }
    for(i=0;i<n-k-1;i++) {
        printf("%d",a[i]); }
    return 0; }
int main() {
  int n,i,k;
  int a[100];
  int pattern(int a[],int n,int k);
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d ",&a[i]); }
  scanf("%d",&k);
pattern(a[],n,k);
    return 0; }