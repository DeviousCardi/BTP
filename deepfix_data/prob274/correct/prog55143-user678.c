#include <stdio.h>
int main(){
   int n;
   int arr[100];
   scanf("%d", &n);
   int t, k;
   arr[0]=1;
   for(int i=1;i<=n;i++) {
   scanf("%d", &arr[i]); }
  for(int j=2;j<=n;j++){
      if(arr[1]==arr[j]){
          printf("%d %d", j+1,j); } }
 return 0; }