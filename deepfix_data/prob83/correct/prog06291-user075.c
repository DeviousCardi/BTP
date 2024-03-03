#include <stdio.h>
int main() {
    int d,arr[1001],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    scanf("%d",&d);
  for(int i=0;i<d;i++)
  {   int temp=arr[n-1];
      for(int j=n;j>0;j--) {
          arr[j]=arr[j-1]; }
      arr[0]=temp; }
  for(int i=0;i<n;i++) {
        printf("%d",arr[i]); }
    return 0; }