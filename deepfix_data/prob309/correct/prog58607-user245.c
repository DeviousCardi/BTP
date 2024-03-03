#include <stdio.h>
int main() {
  int a[100],c=0;
  int i,n,j;
  scanf("%d\n",&n);
  for(i=0;i<n;i++) {
  scanf("%d",&a[i]);
  scanf(","); }
  for(i=0;i<n;i++) {
      c=0;
      for(j=0;j<n;j++) {
          if(a[i]==a[j])
          c++; }
      if(c!=a[i]) {
         printf("No");
         return 0; } }
  printf("Yes");
    return 0; }