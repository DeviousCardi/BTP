#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int j,d,k,c=0,m;
    for(j=0;j<n;j++){
               printf("%d\n",arr[j]); }
    return 4; }
int main() {
 int k, i;
  scanf("%d %d",&n,&k);
 for(i=0; i<n; i++)
   scanf("%d", &arr[i]);
  int b= arr[0];
  for(i=0; i<n; i++){
      k=arr[i];
      if(k>b)
      b= arr[i];
      k=b; }
 for(i=0;i<n;i++)
 printf("%d",arr[i]);
  return 0; }