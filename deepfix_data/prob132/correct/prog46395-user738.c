#include <stdio.h>
int main() {
  int n,flag=0;
  scanf("%d",&n);
  int i,a[n+1],freq[1000]={0};
  for(i=0;i<n;i++) {
      scanf("%d,",&a[i]); }
  for(i=0;i<n;i++) {
      freq[a[i]]++; }
  for(i=0;i<1000;i++) {
      if(freq[i]!=0) {
          if(i==freq[i])
          flag=1;
          else {
              flag=0;
          break; } } }
  if(flag==1)
  printf("Yes");
  else
  printf("No"); }