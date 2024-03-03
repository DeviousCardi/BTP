#include <stdio.h>
int main() {
    int testarr[1000000]={},count=0,i,n;
    scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(i=0;i<n;i++) {
      int k=arr[i];
      testarr[k]++; }
  for(i=0;i<n;i++) {
      if(testarr[i]==i||testarr[i]==0)
      count++; }
  if(count==n)
  printf("Yes");
  else
  printf("No");
    return 0; }