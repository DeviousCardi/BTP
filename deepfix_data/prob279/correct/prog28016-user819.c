#include <stdio.h>
int main() {
  int n;
  int found=0;
  int arr[100];
  scanf("%d",&n);
  int i=0;
  for(i=0;i<n;i++){
      scanf("%d ",&arr[i]); }
  int miss;
  for (i=1;i<=n;i++){
      found=0;
      for(int j=0;j<n;j++){
          if (arr[j]==i){
              found=1; } }
      if(found!=1){
          miss=i;
          break; } }
  printf("%d",miss);
    return 0; }