#include <stdio.h>
int main() {
  char a[100],c=0;
  int i,n,j;
  scanf("%d\n",&n);
  for(i=0;i<((2*n)-1);i++)
  scanf("%c",&a[i]);
  for(i=0;i<((2*n)-1);i=i+2) {
      c=0;
      for(j=0;j<((2*n)-1);j=j+2) {
          if(a[i]==a[j])
          c++;
          printf("%c ",c); }
      if(c!=a[i]) {
         printf("No");
         return 0; } }
  printf("Yes");
    return 0; }