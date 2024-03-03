#include <stdio.h>
int main() {
  int a1,a2,n,sum,t2,t1;
  scanf("%d%d%d",&a1,&a2,&n);
  if(n>2) {
  t1=a1;
  t2=a2;
  for( int i=3;i<=n;i++) {
      sum=t1+t2-2;
  t1=t2;
  t2=sum; }
  printf("%d",sum); }
  if(n==1)
  printf("%d",a1);
  if(n==2)
  printf("%d",a2);
        return 0; }