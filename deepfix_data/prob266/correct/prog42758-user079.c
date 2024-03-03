#include <stdio.h>
int main(){
  int n,r,s=0;
  scanf("%d",&n);
  while(n!=0) {
      r=n%10;
      s=s+r;
      n=n/10; }
    n=2016;
    while(n%s!=0) {
        n=n+1; }
    printf("%d",n);
    return 0; }