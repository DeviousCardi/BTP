#include <stdio.h>
int main() {
  int n,i,j,temp,count=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
      scanf("%d",&a[i]); }
  for(i=0;i<n;i++){
      temp=a[i];count=0;
      for(j=0;j<n;j++){
          if(a[i]==temp){
              count=count+1;
          }printf("%d",count); }
      if(count!=temp) {
          printf("no");
          return 0; } }
  printf("yes");
    return 0; }