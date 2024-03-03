#include <stdio.h>
int main() {
  int t1,t2,n,tn,t=1;
  scanf("%d%d%d",&t1,&t2,&n);
  if(n>2) {
  for(int i=1;i<=n-2;i++) {
    t=t*2; }
tn=(n-2)*t2+(n-3)*t1-(2*(t-1));
        printf("%d",tn); }
  if(n==1)
  printf("%d",t1);
  if(n==2)
  printf("%d",t2);
        return 0; }