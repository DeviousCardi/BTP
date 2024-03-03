#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit)
{ int a,i;
  a=arr[0];
  for(i=0;i<n&&arr[i]<upperLimit;i++){
    if(arr[i]>a)
        a=arr[i]; }
  return a; }
int main() {
  int k,i;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++){
      scanf("%d",&arr[i]); }
  int maximum;
  maximum=arr[0];
  for(i=0;i<n;i++){
      if(arr[i]>maximum)
        maximum=arr[i]; }
  printf("%d\n",maximum);
  for(i=1;i<k;i++){
      maximum= getMaxLessThan(maximum);
      printf("%d\n",maximum); }
    return 0; }