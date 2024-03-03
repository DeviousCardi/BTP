#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int p;
    for(p=0;p<n;p++){
        scanf("%d",&arr[p]); }
  int d;
  scanf("%d",&d);
  int i,j;
  int c=arr[0];
  int e;
  for(i=0;i<d;i++){
      for(j=0;j<n;j++){
          if(j<=(n-2)){
              d=arr[j+1];
              arr[j+1]=c;
              c=d; }
          else{arr[0]=c;} } }
  int k;
  for(k=0;k<n;k++){
      printf("%d ",arr[k]); }
    return 0; }