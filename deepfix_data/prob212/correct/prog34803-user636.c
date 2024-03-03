#include <stdio.h>
int main() {
  int p,q,r,s,i,n,m;
  scanf("%d",&n);
  s=n%10;
  if((n-s)!=0)
  p=((n-s)/10)%10;
  else p=0;
  if((n-s-10*p)!=0)
  r=((n-s-10*p)/100)%10;
  else r=0;
  if((n-s-10*p-100*s)!=0)
  q=((n-s-10*p-100*s)/1000);
  else q=0;
  for(i=2016;5;i++) {
      m=i%(p+q+r+s);
      if(m!=0)
      continue;
      if(m==0) {
          printf("%d",i);
          break; } }
    return 0; }