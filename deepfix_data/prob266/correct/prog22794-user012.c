#include <stdio.h>
int main() {
 int n,l,t=0,p=2016;
 scanf("%d",&n);
     for(int i=0;i<n;i++) {
     l=n%10;
  if(l==0)
  n=n/10;
  else {
 t=t+l;
  n=n-l; } }
printf("%d\n",t);
 while((p%t)!=0) {
     p=p+1; }
  if((p%t)==0)
  printf("%d",p);
    return 0; }