#include <stdio.h>
int main() {
  int a[100],i,n,j,c=0;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  scanf("%d ",&a[i]);
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          if(a[i]==a[j])
          c++; }
      if(c!=a[i]) {
         printf("No");
         return 0; } }
  printf("Yes");
    return 0; }