#include <stdio.h>
int main() {
  int t1,t2,n;
  scanf("%d%d%d",&t1,&t2,&n);
  int i,t[n];
      for( i=3;i<=n;i++) {
        t[1]=t1;
        t[2]=t2;
      t[i]=t[i-1]+t[i-2]-2; }
        printf("%d",t[i]);
        return 0; }