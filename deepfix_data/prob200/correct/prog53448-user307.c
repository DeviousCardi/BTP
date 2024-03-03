#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) { }
int main() {
  int n, a[500];
  scanf("%d ",&n);
  int i=0;
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  int m=a[0];
  for(i=0;i<n;i++)
 { if(a[i]>m)
  m=a[i];
  else m;}
  printf("%d",m);
    return 0; }