#include <stdio.h>
int main() {
  int i,n,j,p;
  scanf("%d",&n);
  int a[n],count[n];
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  count[i]=0;
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          if(a[i]==a[j]) {
              count[a[i]]++; } } }
  for(i=0;i<n;i++) {
      if(count[a[i]]==2) {
          printf("%d",a[i]);
          break; } }
  for(i=1;i<=n;i++)
  {p=0;
    for(j=0;j<n;j++) {
        if(i==a[j])
        {p=1;
         break; } } }
    return 0; }