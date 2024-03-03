#include <stdio.h>
int main() {
  int n,i,j,count=1;
  int flag;
  int arr[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          if(i!=j&&arr[i]==arr[j]) {
              count=count+1; } }
      if(count==arr[i]) {
          flag=0; }
      else
      flag=flag+1;
      count=1; }
  if(flag==0)
  printf("Yes");
  else
  printf("No");
    return 0; }