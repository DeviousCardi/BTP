#include <stdio.h>
int main() {
 int n,l,m,k,t=0,p=2016;
 scanf("%d",&n);
     for(int i=0;i<n;i++) {
     l=n%10;
 m=l;
 t=t+m;
  if(l==0)
  l=n/10;
  else
  l=l-m; }
 k=p%t;
 while(k!=0) {
     p=p+1;
     k=p%t; }
  if(k==0)
  printf("%d",p);
    return 0; }