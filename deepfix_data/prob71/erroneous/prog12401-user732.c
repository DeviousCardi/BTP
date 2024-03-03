#include <stdio.h>
int main() {
 int i,n,temp;
 scanf("%d",&n);
 int arr[n];
  for(i=0;i<n;i++){
      if(arr[i]>=temp)
    temp  =arr[i]; }
 for(i=0;i<n;i++){
     arr[i+1]=arr[i];
     printf("%d",arr[n/2]);
    return 0; }