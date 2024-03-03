#include <stdio.h>
int main(){
   int n;
   int arr[100];
   scanf("%d", &n);
   int t, k;
   arr[0]=1;
   for(int i=1;i<=n;i++) {
   scanf("%d", &arr[i]); }
   int count=0;
  for(int j=2;j<=n;j++){
      if(arr[1]==arr[j]){
          count=count+1;
          break; } }
  t=count;
  k=count-1;
  printf("%d  %d",t,k);
    return 0; }