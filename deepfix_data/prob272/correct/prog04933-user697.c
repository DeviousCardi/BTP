#include <stdio.h>
int main() {
    int i,a1,a2,n,a,b,c;
    scanf("%d%d%d",&c,&b,&n);
    for(i=3;i<=n;i++) {
      a=b+c-2;
      b=a;
      c=b;
      a=b+c-2;
      { printf("%d",a);} }
    if(n==1)
    {printf("%d",a1);}
    if(n==2)
    {printf("%d",a2);}
    return 0; }