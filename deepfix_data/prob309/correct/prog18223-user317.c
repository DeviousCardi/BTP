#include <stdio.h>
int main() {
  int n,count=0,flag=1;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
      scanf("%d,",&a[i]); }
  for(int i=0;i<n;i++ && flag==1){
      count =0;
     for(int j=0;j<n;j++){
         if(a[j]==a[i])
         count++; }
      if(count==a[i])
      flag=1;
      else
      flag=0; }
  if(flag==1)
  printf("Yes");
  else
  printf("No");
    return 0; }