#include <stdio.h>
int main() {
  int p,q,r,s,i,n;
  scanf("%d%d%d%d",&p,&q,&r,&s);
  for(i=2016;5;i++) {
      n=i%(p+q+r+s);
      if(n!=0)
      continue;
      if(n==0) {
          printf("%d",i);
          break; } }
    return 0; }