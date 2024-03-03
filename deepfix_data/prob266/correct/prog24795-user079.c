#include <stdio.h>
int main(){
  int n,i,r,s=0;
  scanf("%d",&n);
  while(n!=0) {
      r=n%10;
      s=s+r;
      n=n/10; }
    i=2016;
    while(i%s!=0) {
        i=i+1; }
    printf("%d",i);
    return 0; }