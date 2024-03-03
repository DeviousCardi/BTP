#include <stdio.h>
int main() {
  char a[100];
  int i,n,j,c=0;
  scanf("%d\n",&n);
  for(i=0;i<(2*n-1);i++)
  scanf("%d ",&a[i]);
  for(i=0;i<(2*n-1);i=i+2) {
      c=0;
      for(j=0;j<(2*n-1);j=j+2) {
          if(a[i]==a[j])
          c++; }
      if(c!=a[i]) {
         printf("No");
         return 0; } }
  printf("Yes");
    return 0; }