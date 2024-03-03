#include <stdio.h>
int main() {
  int a1,a2,n,a,i;
  scanf("%d %d %d",&a1,&a2,&n);
  if(n==1)
    printf("%d",a1);
  else if(n==2)
    printf("%d",a2);
  else {
      for(i=1;i<=n;i++) {
          a=a2+a1-2;
          a1=a2;a2=a; } }
    printf("%d",a1);
    return 0; }