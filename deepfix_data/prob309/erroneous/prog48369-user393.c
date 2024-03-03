#include <stdio.h>
int main() {
  int n,i,j,count=1;
  int arr[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          if(i!=j&&arr[i]=arr[j]) {
              count=count+1; } }
      if(count==a[i]) {
          printf("Yes"); }
      else
      printf("No");
      count=1; }
    return 0; }