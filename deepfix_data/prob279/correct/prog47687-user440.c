#include <stdio.h>
int main() {
  int n,arr[1000],i,j,a=0,b=0;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          if(arr[i]==arr[j]) {
              a++;
              printf("%d ",arr[i]); } } }
  printf("\n");
  for(i=0;i<n;i++)
  {b=0;
      for(j=0;j<n;j++) {
          if(arr[i]==arr[j])
          continue;
          else
          b++; } }
    return 0; }