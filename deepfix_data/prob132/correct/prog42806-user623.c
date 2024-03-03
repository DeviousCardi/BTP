#include <stdio.h>
int main() {
    int testarr[9]={},count=0,i,n;
    scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(i=0;i<n;i++) {
      int k=arr[i];
      testarr[k]++; }
  for(i=0;i<n;i++) {
      if(arr[i]==i||arr[i]==0)
      count++; }
  if(count==n)
  printf("Yes");
  else
  printf("No");
  printf("\n%d\n",count);
    return 0; }