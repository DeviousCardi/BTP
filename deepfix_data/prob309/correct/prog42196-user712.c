#include <stdio.h>
int main() {
  int n,i,j,c,flag=0;
  scanf("%d,",&n);
  int a[n];
  for(i=0;i<n;i++)
  scanf("%d,",&a[i]);
  for(i=0;i<n;i++)
  printf("%d",a[i]);
  for(i=0;i<n;i++) {
      c=0;
      for(j=0;j<n;j++) {
          if(a[i]==a[j])
          c++; }
      if(c!=a[i]) {
          flag=1;
          break; } }
  if(flag==1)
  printf("No");
  else
  printf("yes");
    return 0; }