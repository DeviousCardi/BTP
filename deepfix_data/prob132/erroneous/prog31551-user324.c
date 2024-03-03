#include <stdio.h>
int main() {
  int arr[10],i,c=0,j;
  int arr2[10],n,s=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
      arr2[i]=0;
      scanf("%d,",&arr[i]); }
  for(i=0;i<n;i++){for(j=0;j<n;j++){
      if(arr[j]==i){arr2[i]++;
  }}}
  for(i=0;i<n;i++){
      if(arr[i]==arr2[i]){s++; }
  if(s==n){
      printf("Yes");}
      else{
      printf("No"); }
    return 0; }