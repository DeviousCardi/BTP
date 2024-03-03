#include <stdio.h>
 void pattern(int a[100],int n,int k);
void pattern(int a[100],int n,int k)
{int i;
    for(i=n-k;i<n;i++) {
        printf("%d ",a[i]); }
    for(i=0;i<n-k;i++) {
        printf("%d ",a[i]); } }
int main() {
  int n,i,k;
  int a[100];
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d ",&a[i]); }
  scanf("%d",&k);
  pattern(a,n,k);
    return 0; }