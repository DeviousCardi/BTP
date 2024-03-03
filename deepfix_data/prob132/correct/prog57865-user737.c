#include <stdio.h>
int main() {
    int n,i,j,count=0,flag=0;
    scanf("%d",&n);
    char arr[2*n-1];
    scanf("%s",arr);
  for(i=0;i<2*n-1;i=i+2) {
      count=1;
      for(j=0;(j<2*n-1);j=j+2) {
          if(j==i)
          continue;
          else if(arr[j]==arr[i]) {
              count++; } }
      if(count==arr[i]-'0') continue;
      else {
          flag=1;
          break; } }
  if(flag==1) printf("No");
  else printf("Yes");
    return 0; }