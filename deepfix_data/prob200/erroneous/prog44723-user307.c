#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) { }
int main() {
  int n, a[500];
  int k, b[500];
  scanf("%d %d",&n,&k);
  int i=0;int j=0;
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {if (a[i]>a[j])
  b[i]=a[i];
  else break;}
  for(i=0;i<k;i++)
  printf("%d",b[i]); }
    return 0; }